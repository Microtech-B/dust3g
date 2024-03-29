#include <main.h>
#include "lvgl.h"
#include "TFT_eSPI.h"
#include "display.h"
#include "SPI.h"
#include "stdio.h"
#include "lv_PM_25.h"
#include <sensor.h>
#include <utility.h>

#define LVGL_TICK_PERIOD 60

TickTask updateLCD_tick(2000U);

TFT_eSPI tft = TFT_eSPI(); /* TFT instance */
static lv_disp_buf_t disp_buf;
static lv_color_t buf[LV_HOR_RES_MAX * 10];

int count = 0;

#if USE_LV_LOG != 0
/* Serial debugging */
void my_print(lv_log_level_t level, const char *file, uint32_t line, const char *dsc)
{

    Serial.printf("%s@%d->%s\r\n", file, line, dsc);
    Serial.flush();
}
#endif

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    uint32_t w = (area->x2 - area->x1 + 1);
    uint32_t h = (area->y2 - area->y1 + 1);

    tft.startWrite();
    tft.setAddrWindow(area->x1, area->y1, w, h);
    tft.pushColors(&color_p->full, w * h, true);
    tft.endWrite();

    lv_disp_flush_ready(disp);
}

/* Reading input device (simulated encoder here) */
bool read_encoder(lv_indev_drv_t *indev, lv_indev_data_t *data)
{
    static int32_t last_diff = 0;
    int32_t diff = 0;                   /* Dummy - no movement */
    int btn_state = LV_INDEV_STATE_REL; /* Dummy - no press */

    data->enc_diff = diff - last_diff;
    data->state = btn_state;

    last_diff = diff;

    return false;
}

/* Interrupt driven periodic handler */
static void lv_tick_handler(void)
{

  lv_tick_inc(LVGL_TICK_PERIOD);
}

void lcd_init()
{
    lv_init();

#if USE_LV_LOG != 0
    lv_log_register_print_cb(my_print); /* register print function for debugging */
#endif

    tft.begin();        /* TFT init */
    tft.setRotation(1); /* Landscape orientation */

    lv_disp_buf_init(&disp_buf, buf, NULL, LV_HOR_RES_MAX * 10);

    /*Initialize the display*/
    lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = px_hor;
    disp_drv.ver_res = px_ver;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.buffer = &disp_buf;
    lv_disp_drv_register(&disp_drv);

    /*Initialize the (dummy) input device driver*/
    lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_ENCODER;
    indev_drv.read_cb = read_encoder;
    lv_indev_drv_register(&indev_drv);

    // /* Create simple label */
    // lv_obj_t *label = lv_label_create(lv_scr_act(), NULL);
    // lv_label_set_text(label, "Hello Dust monitor 3G!");
    // lv_obj_align(label, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_PM_25();
}

void lcd_run()
{
    lv_task_handler(); /* let the GUI do its work */
    //delay(5);
    if(updateLCD_tick.Update()){
        update_aqi_value(sensor.getAQI25());
        //update_pm2dot5_value(sensor.get_pm2_5());data.pm25_env
        update_pm2dot5_value(data.pm25_env);
        update_pm1dot0_value(data.pm10_env);
        //update_pm10_value(sensor.get_pm10());
        update_pm10_value(data.pm100_env);
        update_temp_value((int)sensor.get_temperature());
        update_rh_value((int)sensor.get_humidity());
    }
}