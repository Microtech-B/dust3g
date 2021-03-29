#include <main.h>
#include <sensor.h>
#include <display.h>
#include <cellular.h>
#include <api.h>
// #include <ota.h>
#include <utility.h>

void LCD_task(void *pvParameter);

TickTask pmsTick(1000U);
char sbuf[256];

void setup()
{
  Serial.begin(115200);
  sensor.sensor_init();
  lcd_init();

  // //Init WiFi as Station, start SmartConfig
  // WiFi.mode(WIFI_AP_STA);
  // WiFi.beginSmartConfig();

  // //Wait for SmartConfig packet from mobile
  // Serial.println("Waiting for SmartConfig.");
  // while (!WiFi.smartConfigDone())
  // {
  //   delay(500);
  //   Serial.print(".");
  // }

  // Serial.println("");
  // Serial.println("SmartConfig received.");

  // //Wait for WiFi to connect to AP
  // Serial.println("Waiting for WiFi");
  // while (WiFi.status() != WL_CONNECTED)
  // {
  //   delay(500);
  //   Serial.print(".");
  // }

  // Serial.println("WiFi Connected.");

  // Serial.print("IP Address: ");
  // Serial.println(WiFi.localIP());

   xTaskCreate(&LCD_task, "LCD_task", 4096, NULL, 2, NULL);
}

void loop()
{
  if (pmsTick.Update())
  {
    sensor.readPMSdust();

    if(!sensor.readAM2315()){
       Serial.println("Failed to read data from AM2315");
    }

    sprintf(sbuf,"->pm1:%d , pm25:%d , pm10:%d, temp:%.2f C, humi:%.2f RH", 
                    sensor.get_pm1(), sensor.get_pm2_5(), sensor.get_pm10(), sensor.get_temperature(), sensor.get_humidity());
    Serial.println(sbuf);
  }
}


void LCD_task(void *pvParameter) {
  Serial.println("LCD task start...");

  while(1){
      lcd_run();
      vTaskDelay(1);
    }    
  }