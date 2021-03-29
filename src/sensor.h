#ifndef SENSOR_H
#define SENSOR_H

#define PMS_RX 33
#define PMS_TX 32

// #define I2C_SDA 32
// #define I2C_SCL 33

class AirSensor
{
    unsigned int pm1 = 0;
    unsigned int pm2_5 = 0;
    unsigned int pm10 = 0;
    float temperature, humidity;

public:
    void sensor_init();
    bool readAM2315();
    void readPMSdust();
    int get_pm1();
    int get_pm2_5();
    int get_pm10();
    float get_temperature();
    float get_humidity();
};

#if !defined(NO_GLOBAL_INSTANCES) && !defined(NO_GLOBAL_SENSOR)
extern AirSensor sensor;
#endif

#endif