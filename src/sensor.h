#ifndef SENSOR_H
#define SENSOR_H

#define PMS_RX 33
#define PMS_TX 32

// #define I2C_SDA 32
// #define I2C_SCL 33

struct pms7003data {
  uint16_t framelen;
  uint16_t pm10_standard, pm25_standard, pm100_standard;
  uint16_t pm10_env, pm25_env, pm100_env;
  uint16_t particles_03um, particles_05um, particles_10um, particles_25um, particles_50um, particles_100um;
  uint16_t unused;
  uint16_t checksum;
};

extern pms7003data data;

class AirSensor
{
    unsigned int pm1 = 0;
    unsigned int pm2_5 = 0;
    unsigned int pm10 = 0;
    float temperature, humidity;

public:
    void sensor_init();
    bool readAM2315();
    boolean readPMSdata(Stream *s);
    boolean readPMSdust();
    uint16_t get_pm1();
    uint16_t get_pm2_5();
    uint16_t get_pm10();
    uint16_t getAQI25();
    float get_temperature();
    float get_humidity();
};

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SENSOR)
extern AirSensor sensor;
#endif

#endif