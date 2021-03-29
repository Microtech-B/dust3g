#include <main.h>
#include <sensor.h>
#include <SoftwareSerial.h>
#include <Wire.h>
#include <Adafruit_AM2315.h>
#include "lv_PM_25.h"
#include <utility.h>


SoftwareSerial pmsSerial(PMS_RX, PMS_TX); // RX, TX
// TwoWire Wire = TwoWire(0);

Adafruit_AM2315 am2315;

int PM25AQI;

// struct pms7003data {
//   uint16_t framelen;
//   uint16_t pm10_standard, pm25_standard, pm100_standard;
//   uint16_t pm10_env, pm25_env, pm100_env;
//   uint16_t particles_03um, particles_05um, particles_10um, particles_25um, particles_50um, particles_100um;
//   uint16_t unused;
//   uint16_t checksum;
// };

pms7003data data;

void printTest() {
  
    // reading data was successful!
    Serial.println();
    Serial.println("---------------------------------------");
    Serial.println("Concentration Units (standard)");
    Serial.print("PM 1.0: "); Serial.print(data.pm10_standard);
    Serial.print("\t\tPM 2.5: "); Serial.print(data.pm25_standard);
    Serial.print("\t\tPM 10: "); Serial.println(data.pm100_standard);
    Serial.println("---------------------------------------");
    Serial.println("Concentration Units (environmental)");
    Serial.print("PM 1.0: "); Serial.print(data.pm10_env);
    Serial.print("\t\tPM 2.5: "); Serial.print(data.pm25_env);
    Serial.print("\t\tPM 10: "); Serial.println(data.pm100_env);
    Serial.println("---------------------------------------");
    Serial.print("Particles > 0.3um / 0.1L air:"); Serial.println(data.particles_03um);
    Serial.print("Particles > 0.5um / 0.1L air:"); Serial.println(data.particles_05um);
    Serial.print("Particles > 1.0um / 0.1L air:"); Serial.println(data.particles_10um);
    Serial.print("Particles > 2.5um / 0.1L air:"); Serial.println(data.particles_25um);
    Serial.print("Particles > 5.0um / 0.1L air:"); Serial.println(data.particles_50um);
    Serial.print("Particles > 10.0 um / 0.1L air:"); Serial.println(data.particles_100um);
    Serial.println("---------------------------------------");
  
}

boolean AirSensor::readPMSdata(Stream *s) {
  if (! s->available()) {
    return false;
  }
  
  // Read a byte at a time until we get to the special '0x42' start-byte
  if (s->peek() != 0x42) {
    s->read();
    return false;
  }
 
  // Now read all 32 bytes
  if (s->available() < 32) {
    return false;
  }
    
  uint8_t buffer[32];    
  uint16_t sum = 0;
  s->readBytes(buffer, 32);
 
  // get checksum ready
  for (uint8_t i=0; i<30; i++) {
    sum += buffer[i];
  }
 
  /* debugging
  for (uint8_t i=2; i<32; i++) {
    Serial.print("0x"); Serial.print(buffer[i], HEX); Serial.print(", ");
  }
  Serial.println();
  */
  
  // The data comes in endian'd, this solves it so it works on all platforms
  uint16_t buffer_u16[15];
  for (uint8_t i=0; i<15; i++) {
    buffer_u16[i] = buffer[2 + i*2 + 1];
    buffer_u16[i] += (buffer[2 + i*2] << 8);
  }
 
  // put it into a nice struct <img draggable="false" class="emoji" alt="🙂" src="https://s.w.org/images/core/emoji/11/svg/1f642.svg">
  memcpy((void *)&data, (void *)buffer_u16, 30);
 
  if (sum != data.checksum) {
    Serial.println("Checksum failure");
    return false;
  }
  // success!
  return true;
}

void AirSensor::sensor_init(){
    pmsSerial.begin(9600);
    Wire.begin();
    Wire.setClock(400000);

    if(!am2315.begin()){
     Serial.println("Sensor not found, check wiring & pullups!");
  }

  delay(2000);

}

bool AirSensor::readAM2315(){
  scanI2C_device();
  return am2315.readTemperatureAndHumidity(&temperature, &humidity);
}

boolean AirSensor::readPMSdust(){

boolean pmRead = readPMSdata(&pmsSerial);
  if (pmRead) {
    // M5.Lcd.setFreeFont(FF18);                 // Select the font
    // M5.Lcd.setTextSize(0.5);
    
    if (data.pm25_env <= 25) {
      // M5.Lcd.fillScreen(TFT_BLUE);           
      // M5.Lcd.setTextColor(TFT_WHITE, TFT_BLUE);    
      // M5.Lcd.drawString("GOOD", 160, 160, GFXFF);// Print the string name of the font
      //Good
      update_status_value("Good", 0x4F9CED);
      PM25AQI = data.pm25_env;
    } else if  ( (data.pm25_env >= 26) &&  (data.pm25_env <= 37) ) {
      // M5.Lcd.fillScreen(TFT_GREEN);
      // M5.Lcd.setTextColor(TFT_WHITE, TFT_GREEN);
      // M5.Lcd.drawString("Moderate", 160, 160, GFXFF);
      //Moderate
      update_status_value("Moderate", 0x009B3B);
      PM25AQI = map(data.pm25_env,26,37,26,50);
    } else if  ( (data.pm25_env >= 38) &&  (data.pm25_env <= 50) ) {
      // M5.Lcd.fillScreen(TFT_GREENYELLOW);
      // M5.Lcd.setTextColor(TFT_WHITE, TFT_GREENYELLOW);
      // M5.Lcd.drawString("unhealthy", 160, 160, GFXFF);
      // //unhealthy for kid
      update_status_value("Unhealthy for kid", 0xEBBD00);
      PM25AQI = map(data.pm25_env,38,50,51,100);
    } else if  ( (data.pm25_env >= 51) &&  (data.pm25_env <= 90) ) {
      //  M5.Lcd.fillScreen(TFT_ORANGE);           
      // M5.Lcd.setTextColor(TFT_WHITE, TFT_ORANGE);
      // M5.Lcd.drawString("very unhealthy", 160, 160, GFXFF);  
      //very unhealthy
      update_status_value("Very unhealthy", 0xFF8000);
      PM25AQI = map(data.pm25_env,51,90,101,200);
    } else if (data.pm25_env >= 91) {
      // M5.Lcd.fillScreen(TFT_RED);
      // M5.Lcd.setTextColor(TFT_WHITE, TFT_RED);
      //Hazardous
      update_status_value("Hazardous", 0xFF0000);
      PM25AQI= 201;
      // M5.Lcd.drawString("Hazardous", 160, 160, GFXFF);
    } 
  
  // //  M5.Lcd.setTextSize(1);
  //   M5.Lcd.drawString("PM2.5(AQI)", 0, 20, GFXFF);
    
  //   M5.Lcd.setTextDatum(ML_DATUM);
  //   M5.Lcd.drawString("PM1:", 0, 195, GFXFF);/
  //   M5.Lcd.drawNumber( data.pm10_env, 80, 195);
  //   M5.Lcd.drawString("PM2.5:", 160, 195, GFXFF);
  //   M5.Lcd.drawNumber( data.pm25_env, 240, 195);
  //   M5.Lcd.drawString("PM10:", 0, 220, GFXFF);
  //   M5.Lcd.drawNumber( data.pm100_env, 80, 220);
    
  //   //M5.Lcd.setTextPadding(80);
  //   M5.Lcd.setTextDatum(MC_DATUM);
  //   M5.Lcd.setFreeFont(CF_OL32);
  //   M5.Lcd.setTextSize(2);
    // if (PM25AQI < 200) {
    //   M5.Lcd.drawNumber( PM25AQI, 160, 100);    
    // } else {      
    //   M5.Lcd.drawString("Over 200", 160, 100, GFXFF);// Print the string name of the font
    // }
    
    // // Reset text padding to zero (default)
    // M5.Lcd.setTextPadding(0);
    // printTest();  //debug
 }
 return pmRead;
}


uint16_t AirSensor::get_pm1(){
  return data.pm10_env;
}

uint16_t AirSensor::get_pm2_5(){
  return data.pm25_env;
}

uint16_t AirSensor::get_pm10(){
  return data.pm100_env;
}

uint16_t AirSensor::getAQI25(){
  return PM25AQI;
}



float AirSensor::get_temperature(){
  //return am2315.readTemperature();
   return temperature;
}

float AirSensor::get_humidity(){
  //return am2315.readHumidity();
   return humidity;
}

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SENSOR)
  AirSensor sensor;
#endif