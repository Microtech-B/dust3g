#include <main.h>
#include <sensor.h>
#include <display.h>
#include <cellular.h>
#include <api.h>
// #include <ota.h>
#include <utility.h>

void update_task(void *pvParameter);

TickTask pmsTick(2000U);
char sbuf[256];
int err_readAM = 0;
int ok_readAM = 0;
bool uc20_ok = false;

void setup()
{
  Serial.begin(115200);

  lcd_init();
  lcd_run();
  uc20_init();
  
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

  xTaskCreate(&update_task, "update_task", 4096, NULL, 2, NULL);
}

void loop()
{
  lcd_run();
  uc20_run();
}

void update_task(void *pvParameter)
{
  sensor.sensor_init();
  while (1)
  {
    sensor.readPMSdust();
    if (pmsTick.Update())
    {

      if (!sensor.readAM2315())
      {
        err_readAM++;
        // Serial.println("Failed to read data from AM2315");
      }
      else
      {
        ok_readAM++;
      }

      sprintf(sbuf, "->pm1:%d , pm25:%d , pm10:%d, temp:%.2f C, humi:%.2f RH | AM_OK:%d, AM_err:%d",
              sensor.get_pm1(), sensor.get_pm2_5(), sensor.get_pm10(), sensor.get_temperature(), sensor.get_humidity(), ok_readAM, err_readAM);
      Serial.println(sbuf);
      // Serial.print("Date/Time : ");  Serial.println(ntpTime());
    }
    vTaskDelay(1);
  }
}
