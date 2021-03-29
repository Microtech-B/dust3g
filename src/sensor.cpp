#include <sensor.h>
#include <SoftwareSerial.h>
#include <Wire.h>
#include <main.h>
#include <Adafruit_AM2315.h>


SoftwareSerial mySerial(PMS_RX, PMS_TX); // RX, TX
Adafruit_AM2315 am2315;

void AirSensor::sensor_init(){
     mySerial.begin(9600);
     if (! am2315.begin()) {
     Serial.println("Sensor not found, check wiring & pullups!");
  }
}

bool AirSensor::readAM2315(){
  return am2315.readTemperatureAndHumidity(&temperature, &humidity);
}

void AirSensor::readPMSdust(){
  int index = 0;
  char value;
  char previousValue;

  while (mySerial.available())
  {
    value = mySerial.read();
    if ((index == 0 && value != 0x42) || (index == 1 && value != 0x4d))
    {
      Serial.println("Cannot find the data header.");
      break;
    }

    if (index == 4 || index == 6 || index == 8 || index == 10 || index == 12 || index == 14)
    {
      previousValue = value;
    }
    else if (index == 5)
    {
      pm1 = 256 * previousValue + value;
      // Serial.print("{ ");
      // Serial.print("\"pm1\": ");
      // Serial.print(pm1);
      // Serial.print(" ug/m3");
      // Serial.print(", ");
    }
    else if (index == 7)
    {
      pm2_5 = 256 * previousValue + value;
      // Serial.print("\"pm2_5\": ");
      // Serial.print(pm2_5);
      // Serial.print(" ug/m3");
      // Serial.print(", ");
    }
    else if (index == 9)
    {
      pm10 = 256 * previousValue + value;
      // Serial.print("\"pm10\": ");
      // Serial.print(pm10);
      // Serial.print(" ug/m3");
    }
    else if (index > 15)
    {
      break;
    }
    index++;
  }
  while (mySerial.available()){
      mySerial.read();
      }
      
  Serial.println(" }");
}


int AirSensor::get_pm1(){
  return (int)pm1;
}

int AirSensor::get_pm2_5(){
  return (int)pm2_5;
}

int AirSensor::get_pm10(){
  return (int)pm10;
}

float AirSensor::get_temperature(){
  return temperature;
}

float AirSensor::get_humidity(){
  return humidity;
}

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SENSOR)
  AirSensor sensor;
#endif