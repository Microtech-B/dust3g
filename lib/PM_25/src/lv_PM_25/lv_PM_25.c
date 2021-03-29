/**
 * @file lv_PM_25.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../lv_examples.h"
#include "lv_PM_25.h"
#include "stdio.h"

#if LV_USE_PM_25

/*********************
 *      DEFINES
 *********************/
/*Animations*/
#define LV_ANIM_Y (LV_VER_RES / 20)
#define LV_ANIM_DELAY (40)
#define LV_ANIM_TIME  (150)
#define LV_ANIM_TIME_BG  (300)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void set_bg();
static void PM_25_open();

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t *label_date;
static lv_obj_t *label_time;
static lv_obj_t *label_value_pm2dot5;
static lv_obj_t *label_value_pm1dot0;
static lv_obj_t *label_value_pm10;
static lv_obj_t *label_value_temp;
static lv_obj_t *label_value_rh;
static lv_obj_t *label_value_aqi;
static lv_obj_t *obj_status;
static lv_obj_t *label_status;

static lv_style_t style_status;

LV_IMG_DECLARE(signal)
LV_IMG_DECLARE(wifi)
LV_IMG_DECLARE(circle)
LV_IMG_DECLARE(men_mask)
LV_IMG_DECLARE(temp)
LV_IMG_DECLARE(rh)
LV_IMG_DECLARE(aqi)
LV_IMG_DECLARE(banner)

lv_style_t font_color_000000;
lv_style_t font_color_ffffff;
lv_style_t font_color_141414;
lv_style_t font_color_888888;
lv_style_t font_color_393939;
lv_style_t font_color_5971fe;

lv_style_t st_kanit_14;
lv_style_t st_kanit_16;
lv_style_t st_kanit_18;
lv_style_t st_kanit_20;
lv_style_t st_kanit_30;
lv_style_t st_kanit_34;
lv_style_t st_kanit_50;
LV_FONT_DECLARE(kanit_14)
LV_FONT_DECLARE(kanit_16)
LV_FONT_DECLARE(kanit_18)
LV_FONT_DECLARE(kanit_20)
LV_FONT_DECLARE(kanit_30)
LV_FONT_DECLARE(kanit_34)
LV_FONT_DECLARE(kanit_50)

/**********************
 *      MACROS
 **********************/

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void set_bg()
{
    static lv_style_t bg_style;
    lv_style_init(&bg_style);
    lv_style_set_bg_color(&bg_style, LV_STATE_DEFAULT, lv_color_hex(0xF6F8FB));
    lv_obj_add_style(lv_scr_act(), LV_OBJ_PART_MAIN, &bg_style);
}
static void PM_25_open()
{
    set_bg();

    lv_obj_t *label;
    lv_obj_t *img;

    lv_style_set_text_color(&font_color_000000, LV_STATE_DEFAULT, lv_color_hex(0x000000));
    lv_style_set_text_color(&font_color_888888, LV_STATE_DEFAULT, lv_color_hex(0x888888));
    lv_style_set_text_color(&font_color_141414, LV_STATE_DEFAULT, lv_color_hex(0x141414));
    lv_style_set_text_color(&font_color_ffffff, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
    lv_style_set_text_color(&font_color_393939, LV_STATE_DEFAULT, lv_color_hex(0x393939));
    lv_style_set_text_color(&font_color_5971fe, LV_STATE_DEFAULT, lv_color_hex(0x5971FE));

    lv_style_set_text_font(&st_kanit_14, LV_STATE_DEFAULT, &kanit_14);
    lv_style_set_text_font(&st_kanit_16, LV_STATE_DEFAULT, &kanit_16);
    lv_style_set_text_font(&st_kanit_18, LV_STATE_DEFAULT, &kanit_18);
    lv_style_set_text_font(&st_kanit_20, LV_STATE_DEFAULT, &kanit_20);
    lv_style_set_text_font(&st_kanit_30, LV_STATE_DEFAULT, &kanit_30);
    lv_style_set_text_font(&st_kanit_34, LV_STATE_DEFAULT, &kanit_34);
    lv_style_set_text_font(&st_kanit_50, LV_STATE_DEFAULT, &kanit_50);

    // label_date
    label_date = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label_date, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label_date, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label_date, "25/03/2021");
    lv_obj_set_pos(label_date, 199, 8);  
    lv_obj_add_style(label_date, LV_OBJ_PART_MAIN, &font_color_888888);
    lv_obj_add_style(label_date, LV_OBJ_PART_MAIN, &st_kanit_16);
    // label_time
    label_time = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label_time, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label_time, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label_time, "23:32");
    lv_obj_set_pos(label_time, 17, 6);  
    lv_obj_add_style(label_time, LV_OBJ_PART_MAIN, &font_color_141414);
    lv_obj_add_style(label_time, LV_OBJ_PART_MAIN, &st_kanit_20);
    // IMG_signal
    img = lv_img_create(lv_scr_act(), NULL); /*Crate an image object*/
    lv_img_set_src(img, &signal);              /*Set the created file as image (a red flower)*/
    lv_obj_set_pos(img, 389, 5);                        /*Set the positions*/
    lv_obj_set_drag(img, false);
    // IMG_wifi
    img = lv_img_create(lv_scr_act(), NULL); /*Crate an image object*/
    lv_img_set_src(img, &wifi);              /*Set the created file as image (a red flower)*/
    lv_obj_set_pos(img, 433.31, 5);                        /*Set the positions*/
    lv_obj_set_drag(img, false);

    // obj_bg_pm_25
    static lv_style_t style_obj_bg_pm_25;
    lv_style_set_radius(&style_obj_bg_pm_25, LV_STATE_DEFAULT, 15);
    lv_style_set_border_width(&style_obj_bg_pm_25, LV_STATE_DEFAULT, 0);
    lv_style_set_outline_width(&style_obj_bg_pm_25, LV_STATE_DEFAULT, 0);
    lv_style_set_bg_color(&style_obj_bg_pm_25, LV_STATE_DEFAULT, lv_color_hex(0x5971FE));
    lv_obj_t *obj_bg_pm_25 = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_width(obj_bg_pm_25, 287);
    lv_obj_set_height(obj_bg_pm_25, 198);
    lv_obj_set_pos(obj_bg_pm_25, 13, 39); 
    lv_obj_add_style(obj_bg_pm_25, LV_OBJ_PART_MAIN, &style_obj_bg_pm_25);
    // IMG_men_mask
    img = lv_img_create(lv_scr_act(), NULL); /*Crate an image object*/
    lv_img_set_src(img, &men_mask);              /*Set the created file as image (a red flower)*/
    lv_obj_set_pos(img, 138.56, 87);                        /*Set the positions*/
    lv_obj_set_drag(img, false);
    // IMG_circle
    img = lv_img_create(lv_scr_act(), NULL); /*Crate an image object*/
    lv_img_set_src(img, &circle);              /*Set the created file as image (a red flower)*/
    lv_obj_set_pos(img, 64.15, 42.65);                        /*Set the positions*/
    lv_obj_set_drag(img, false);
    // label_t_pm_25
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label, "PM 2.5");
    lv_obj_set_pos(label, 27, 59);  
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_ffffff);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_20);
    // label_air_quality
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label, "ug./m3");
    lv_obj_set_pos(label, 233, 59);  
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_ffffff);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_20);
    // label_1.0
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label, "PM 1.0");
    lv_obj_set_pos(label, 23, 177);  
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_ffffff);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_20);
    // label_10
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label, "PM 10");
    lv_obj_set_pos(label, 234, 177);  
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_ffffff);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_20);
    //value pm 1.0
    label_value_pm1dot0 = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label_value_pm1dot0, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label_value_pm1dot0, LV_LABEL_ALIGN_RIGHT);       /*Center aligned lines*/
    lv_label_set_text(label_value_pm1dot0, "20");
    // lv_obj_set_pos(label_value_pm1dot0, 33, 201);  
    lv_obj_align(label_value_pm1dot0, obj_bg_pm_25, LV_ALIGN_IN_BOTTOM_LEFT, 20, -20);
    lv_obj_add_style(label_value_pm1dot0, LV_OBJ_PART_MAIN, &font_color_ffffff);
    lv_obj_add_style(label_value_pm1dot0, LV_OBJ_PART_MAIN, &st_kanit_30);
    //value pm 2.5
    label_value_pm2dot5 = lv_label_create(lv_scr_act(), NULL);
    // lv_label_set_static_text(label_value_pm2dot5, txtLbl); 
    lv_label_set_align(label_value_pm2dot5, LV_LABEL_ALIGN_CENTER );
    lv_obj_align(label_value_pm2dot5, obj_bg_pm_25, LV_ALIGN_CENTER, 0, 20);
    lv_obj_set_auto_realign(label_value_pm2dot5, true );
    lv_label_set_recolor(label_value_pm2dot5, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_text(label_value_pm2dot5, "45");
    lv_obj_add_style(label_value_pm2dot5, LV_OBJ_PART_MAIN, &font_color_ffffff);
    lv_obj_add_style(label_value_pm2dot5, LV_OBJ_PART_MAIN, &st_kanit_50);
    //value pm 10
    label_value_pm10 = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label_value_pm10, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label_value_pm10, LV_LABEL_ALIGN_RIGHT);       /*Center aligned lines*/
    lv_label_set_text(label_value_pm10, "70");
    // lv_obj_set_pos(label_value_pm10, 244, 201);  
    lv_obj_align(label_value_pm10, obj_bg_pm_25, LV_ALIGN_IN_BOTTOM_RIGHT, -40, -20);
    lv_obj_add_style(label_value_pm10, LV_OBJ_PART_MAIN, &font_color_ffffff);
    lv_obj_add_style(label_value_pm10, LV_OBJ_PART_MAIN, &st_kanit_30);

    // obj_bg_temp
    static lv_style_t style_obj_bg_temp;
    lv_style_set_radius(&style_obj_bg_temp, LV_STATE_DEFAULT, 10);
    lv_style_set_border_width(&style_obj_bg_temp, LV_STATE_DEFAULT, 0);
    lv_style_set_outline_width(&style_obj_bg_temp, LV_STATE_DEFAULT, 0);
    lv_style_set_bg_color(&style_obj_bg_temp, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
    lv_obj_t *obj_bg_temp = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_width(obj_bg_temp, 156);
    lv_obj_set_height(obj_bg_temp, 58);
    lv_obj_set_pos(obj_bg_temp, 312, 39); 
    lv_obj_add_style(obj_bg_temp, LV_OBJ_PART_MAIN, &style_obj_bg_temp);
    // IMG_temp
    img = lv_img_create(lv_scr_act(), NULL); /*Crate an image object*/
    lv_img_set_src(img, &temp);              /*Set the created file as image (a red flower)*/
    lv_obj_set_pos(img, 337, 49);                        /*Set the positions*/
    lv_obj_set_drag(img, false);
    // label_temp
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label, "Temp");
    lv_obj_set_pos(label, 322, 70);  
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_393939);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_16);
    // label_value_temp
    label_value_temp = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label_value_temp, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label_value_temp, LV_LABEL_ALIGN_RIGHT);       /*Center aligned lines*/
    lv_label_set_text(label_value_temp, "28");
    lv_obj_set_pos(label_value_temp, 394, 57);  
    lv_obj_add_style(label_value_temp, LV_OBJ_PART_MAIN, &font_color_5971fe);
    lv_obj_add_style(label_value_temp, LV_OBJ_PART_MAIN, &st_kanit_34);
    // label_temp
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label, "C0");
    lv_obj_set_pos(label, 433, 70);  
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_393939);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_16);

    // obj_bg_rh
    static lv_style_t style_obj_bg_rh;
    lv_style_set_radius(&style_obj_bg_rh, LV_STATE_DEFAULT, 10);
    lv_style_set_border_width(&style_obj_bg_rh, LV_STATE_DEFAULT, 0);
    lv_style_set_outline_width(&style_obj_bg_rh, LV_STATE_DEFAULT, 0);
    lv_style_set_bg_color(&style_obj_bg_rh, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
    lv_obj_t *obj_bg_rh = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_width(obj_bg_rh, 156);
    lv_obj_set_height(obj_bg_rh, 58);
    lv_obj_set_pos(obj_bg_rh, 312, 109); 
    lv_obj_add_style(obj_bg_rh, LV_OBJ_PART_MAIN, &style_obj_bg_rh);
    // IMG_rh
    img = lv_img_create(lv_scr_act(), NULL); /*Crate an image object*/
    lv_img_set_src(img, &rh);              /*Set the created file as image (a red flower)*/
    lv_obj_set_pos(img, 337, 122);                        /*Set the positions*/
    lv_obj_set_drag(img, false);
    // label_rh
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label, "Humidity");
    lv_obj_set_pos(label, 322, 142);  
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_393939);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_16);
    // label_value_rh
    label_value_rh = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label_value_rh, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label_value_rh, LV_LABEL_ALIGN_RIGHT);       /*Center aligned lines*/
    lv_label_set_text(label_value_rh, "36");
    lv_obj_set_pos(label_value_rh, 394, 129);  
    lv_obj_add_style(label_value_rh, LV_OBJ_PART_MAIN, &font_color_5971fe);
    lv_obj_add_style(label_value_rh, LV_OBJ_PART_MAIN, &st_kanit_34);
    // label_%
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label, "%RH");
    lv_obj_set_pos(label, 434, 142);  
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_393939);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_16);

    // obj_bg_aqi
    static lv_style_t style_obj_bg_aqi;
    lv_style_set_radius(&style_obj_bg_aqi, LV_STATE_DEFAULT, 10);
    lv_style_set_border_width(&style_obj_bg_aqi, LV_STATE_DEFAULT, 0);
    lv_style_set_outline_width(&style_obj_bg_aqi, LV_STATE_DEFAULT, 0);
    lv_style_set_bg_color(&style_obj_bg_aqi, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
    lv_obj_t *obj_bg_aqi = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_width(obj_bg_aqi, 156);
    lv_obj_set_height(obj_bg_aqi, 58);
    lv_obj_set_pos(obj_bg_aqi, 312, 179); 
    lv_obj_add_style(obj_bg_aqi, LV_OBJ_PART_MAIN, &style_obj_bg_aqi);
    // IMG_aqi
    img = lv_img_create(lv_scr_act(), NULL); /*Crate an image object*/
    lv_img_set_src(img, &aqi);              /*Set the created file as image (a red flower)*/
    lv_obj_set_pos(img, 337, 192);                        /*Set the positions*/
    lv_obj_set_drag(img, false);
    // label_aqi
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label, "AQI-US");
    lv_obj_set_pos(label, 322, 210);  
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_393939);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_16);
    // label_value_rh
    label_value_aqi = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label_value_aqi, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label_value_aqi, LV_LABEL_ALIGN_RIGHT);       /*Center aligned lines*/
    lv_label_set_text(label_value_aqi, "115");
    lv_obj_set_pos(label_value_aqi, 394, 197);  
    lv_obj_add_style(label_value_aqi, LV_OBJ_PART_MAIN, &font_color_5971fe);
    lv_obj_add_style(label_value_aqi, LV_OBJ_PART_MAIN, &st_kanit_34);

    // obj_bg_scoll
    static lv_style_t style_obj_bg_scoll;
    lv_style_set_radius(&style_obj_bg_scoll, LV_STATE_DEFAULT, 10);
    lv_style_set_border_width(&style_obj_bg_scoll, LV_STATE_DEFAULT, 0);
    lv_style_set_outline_width(&style_obj_bg_scoll, LV_STATE_DEFAULT, 0);
    lv_style_set_bg_color(&style_obj_bg_scoll, LV_STATE_DEFAULT, lv_color_hex(0xFFFFFF));
    lv_obj_t *obj_bg_scoll = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_width(obj_bg_scoll, 455);
    lv_obj_set_height(obj_bg_scoll, 59);
    lv_obj_set_pos(obj_bg_scoll, 13, 249);
    lv_obj_add_style(obj_bg_scoll, LV_OBJ_PART_MAIN, &style_obj_bg_scoll);
    
    lv_style_set_bg_color(&style_status, LV_STATE_DEFAULT, lv_color_hex(0x00DE16));
    lv_style_set_radius(&style_status, LV_STATE_DEFAULT, 5);
    lv_style_set_shadow_width(&style_status, LV_STATE_DEFAULT, LV_VER_RES / 25);
    lv_style_set_shadow_color(&style_status, LV_STATE_DEFAULT, lv_color_hex(0x707070));
    lv_style_set_shadow_opa(&style_status, LV_STATE_DEFAULT, 95);
    lv_style_set_outline_width(&style_status, LV_STATE_DEFAULT, 0);
    lv_style_set_border_width(&style_status, LV_STATE_DEFAULT, 0);
    obj_status = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_set_width(obj_status, 264);
    lv_obj_set_height(obj_status, 42);
    lv_obj_set_pos(obj_status, 28, 258);
    lv_obj_add_style(obj_status, LV_OBJ_PART_MAIN, &style_status);
    // label_status
    label_status = lv_label_create(obj_status, NULL);
    lv_label_set_recolor(label_status, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label_status, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_obj_align(label_status, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_label_set_text(label_status, "Good");
    lv_obj_add_style(label_status, LV_OBJ_PART_MAIN, &font_color_ffffff);
    lv_obj_add_style(label_status, LV_OBJ_PART_MAIN, &st_kanit_18);
    // label_S/n
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_obj_set_pos(label, 336, 258);
    lv_label_set_text(label, "S/n :");
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_393939);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_14);
    // label_Status
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_obj_set_pos(label, 336, 273);
    lv_label_set_text(label, "Status :");
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_393939);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_14);
    // label_Status
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_recolor(label, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_obj_set_pos(label, 336, 288);
    lv_label_set_text(label, "Firmware :");
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &font_color_393939);
    lv_obj_add_style(label, LV_OBJ_PART_MAIN, &st_kanit_14);
}

/**********************
 *   EVENT FUNCTIONS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void update_status_value(char value[50], int color)
{
    lv_label_set_text(label_status, value);
    static lv_style_t style;
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, lv_color_hex(color));
    lv_obj_add_style(obj_status, LV_OBJ_PART_MAIN, &style);
}
void update_date_value(char value[10])
{
    lv_label_set_text(label_date, value);
}
void update_time_value(char value[5])
{
    lv_label_set_text(label_time, value);
}
void update_pm2dot5_value(int value)
{
    char show_value[10];
    sprintf(show_value, "%d", value);
    lv_label_set_text(label_value_pm2dot5, show_value);
}
void update_pm1dot0_value(int value)
{
    char show_value[10];
    sprintf(show_value, "%d", value);
    lv_label_set_text(label_value_pm1dot0, show_value);
}
void update_pm10_value(int value)
{
    char show_value[10];
    sprintf(show_value, "%d", value);
    lv_label_set_text(label_value_pm10, show_value);
}
void update_temp_value(int value)
{
    char show_value[10];
    sprintf(show_value, "%d", value);
    lv_label_set_text(label_value_temp, show_value);
}
void update_rh_value(int value)
{
    char show_value[10];
    sprintf(show_value, "%d", value);
    lv_label_set_text(label_value_rh, show_value);
}
void update_aqi_value(int value)
{
    char show_value[10];
    sprintf(show_value, "%d", value);
    lv_label_set_text(label_value_aqi, show_value);
}

void lv_PM_25(void)
{
    PM_25_open();
    update_pm2dot5_value(125);
}

#endif
