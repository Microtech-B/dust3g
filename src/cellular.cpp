#include <main.h>
#include <cellular.h>
#include "TEE_UC20.h"
#include "internet.h"
#include "tcp.h"
#include "uc_anto.h"
#include "sensor.h"

// AltSoftSerial mySerial;
INTERNET net;
TCP tcp;
UCxANTO anto;

//SIM TRUE  internet
#define APN "internet"
#define USER ""
#define PASS ""

// // anto
// #define USERNAME "your username"
// #define NAME "name Thing"
// #define KEY " Authen key "

// anto
#define USERNAME "DUST"
#define NAME "AQI"
#define KEY "C8iaGQBBRWo1edPjwJDSGq34iiGhgYS0yRWNltY5"


unsigned long previousMillis = 0;
const long interval = 5000;
bool connect_ok = false;
String DateTime_uc20;

void debug(String data)
{
    Serial.println(data);
}

bool uc20_init()
{
    //gsm.begin(&mySerial, 9600);
    Serial2.begin(9600);

    gsm.begin(&Serial2, 9600);
    gsm.Event_debug = debug;
    Serial.println(F("UC20"));

    gsm.PowerOn();
    // gsm.WaitReady();
    return true;
}

void uc20_run()
{
    
    unsigned long currentMillis = millis();


//    if (Serial.available())
//   {
//     Serial2.write(Serial.read());
//   }
//   if (Serial2.available())
//   {
//     Serial.write(Serial2.read());
//   }

    if(connect_ok == false){
        if (gsm.WaitReady() == false)
        {
            Serial.print(F("GetOperator --> "));
            Serial.println(gsm.GetOperator());
            Serial.print(F("SignalQuality --> "));
            Serial.println(gsm.SignalQuality());

            Serial.println(F("Disconnect net"));
            net.DisConnect();
            Serial.println(F("Set APN and Password"));
            net.Configure(APN, USER, PASS);
            Serial.println(F("Connect net"));
            net.Connect();
            Serial.println(F("Show My IP"));
            Serial.println(net.GetIP());
            anto.begin(USERNAME, KEY, NAME);
            anto.func_map(sub_rx);
            connect_();
            
            connect_ok = true;
        }
    }else{
        unsigned char connected_server = anto.loop();
        // sensor.readPMSdust();
        if (currentMillis - previousMillis >= interval)
        {
            
            DateTime_uc20 = tcp.NTP(1,"time2.navy.mi.th","123");
            previousMillis = currentMillis;
            Serial.println("Publish");

            // float h = dht.readHumidity();
            // float t = dht.readTemperature();
            // anto.pub("Humi",h);
            // anto.pub("Temp",t);

            //Device_1
            anto.pub("AQI_US_1", sensor.getAQI25());
            anto.pub("PM1_0_1", data.pm10_env);
            anto.pub("PM10_1", data.pm100_env);
            anto.pub("PM2_5_1", data.pm25_env);
            anto.pub("Temp_1", sensor.get_temperature());
            anto.pub("val_RH_1", sensor.get_humidity());

            // //Device_2
            // anto.pub("AQI_US_2", sensor.getAQI25());
            // anto.pub("PM1_0_2", data.pm10_env);
            // anto.pub("PM10_2", data.pm100_env);
            // anto.pub("PM2_5_2", data.pm25_env);
            // anto.pub("Temp_2", sensor.get_temperature());
            // anto.pub("val_RH_2", sensor.get_humidity());


            // Serial.print("AQI_US_1: " + String(value1[0]) + " PM1_0_1: " + String(value1[1]) + "PM10_1: " + String(value1[2]));
            // Serial.println(" PM2_5_1: " + String(value1[3]) + " Temp_1: " + String(value1[4]) + "val_RH_1: " + String(value1[5]));

            // Serial.print("AQI_US_2: " + String(value2[0]) + " PM1_0_2: " + String(value2[1]) + "PM10_2: " + String(value2[2]));
            // Serial.println(" PM2_5_2: " + String(value2[3]) + " Temp_2: " + String(value2[4]) + "val_RH_2: " + String(value2[5]));

        }
        if (connected_server == 0)connect_();
    }
}

void connect_()
{
    anto.connectServer();
    // anto.sub("Ctrl_LED");
    //Device_1
    anto.sub("AQI_US_1");
    anto.sub("PM1_0_1");
    anto.sub("PM10_1");
    anto.sub("PM2_5_1");
    anto.sub("Temp_1");
    anto.sub("val_RH_1");

    // //Device_2
    // anto.sub("AQI_US_2");
    // anto.sub("PM1_0_2");
    // anto.sub("PM10_2");
    // anto.sub("PM2_5_2");
    // anto.sub("Temp_2");
    // anto.sub("val_RH_2");
}

void sub_rx(String topic, char *payloat, unsigned char length)
{
    payloat[length] = 0;
    String str_payloat(payloat);
    if (topic.indexOf("Ctrl_LED") != -1)
    {
        //    if(str_payloat.indexOf("1")!=-1)
        //       digitalWrite(LEDPIN,LOW);
        //    if(str_payloat.indexOf("0")!=-1)
        //       digitalWrite(LEDPIN,HIGH);
    }
}

String ntpTime(){
   return DateTime_uc20;
}