#include <main.h>
#include <sensor.h>
#include <display.h>
#include <cellular.h>
#include <api.h>
// #include <ota.h>
#include <utility.h>


TickTask pmsTick(1000U);

void setup()
{
  Serial.begin(115200);
  pms_init();
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
}

void loop()
{

  lcd_run();
  if (pmsTick.Update())
  {
    test_pmsDust();
  }
}