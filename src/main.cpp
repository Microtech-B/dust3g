#include <main.h>
#include <pms.h>
#include <display.h>
#include <utility.h>

TickTask pmsTick(1000U);

void setup()
{
  Serial.begin(115200);
  while (!Serial);
  pms_init();
  lcd_init();
}

void loop()
{
  lcd_run();
  if(pmsTick.Update()){
    test_pmsDust();
  }
  
}