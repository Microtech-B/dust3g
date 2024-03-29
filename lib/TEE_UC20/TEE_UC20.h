#ifndef UC20_h
#define UC20_h

#define ATLSOFTSERIAL 0

#include <Arduino.h>
#include <Stream.h>
#include <SoftwareSerial.h>
#if ATLSOFTSERIAL 
	#include "AltSoftSerial.h"
#endif

#define EVENT_NULL	0
#define EVENT_RING	1
#define EVENT_SMS	2
#define UFS "UFS"
#define RAM "RAM"
#define COM "COM"
class UC20 
{
public:
	UC20();
	void begin(SoftwareSerial *serial,long baud);	
	void begin(HardwareSerial *serial,long baud);
	#if ATLSOFTSERIAL 
	void begin(AltSoftSerial *serial,long baud);
	#endif
	void (*Event_debug)(String data);
	void debug (String data);
	void SetPowerKeyPin(int pin);
	bool PowerOn();
	bool PowerOff();
	bool WaitReady();
	String GetOperator();
	unsigned char SignalQuality();
	bool wait_ok_(long time,bool db);
	bool wait_ok(long time);
	bool wait_ok_ndb(long time);
	unsigned char event_input();
	unsigned char event_type;
	
	
	unsigned char index_new_SMS;
	void start_time_out();
	bool time_out(long timeout_interval);
	
	int  peek();
	virtual size_t write(uint8_t byte);
	int read();
    int available();
    virtual void flush();
	void print(unsigned char data,int type);
	void print(int data,int type);
	void print(unsigned int data,int type);
	void print(long data,int type);
	size_t print(String data);
	size_t println (String data);
	size_t print(String data,int type);
	size_t println (String data,int type);
	String readStringUntil(char data);
	void  my_flush();
protected:
	 Stream *_Serial;
};
extern UC20 gsm;

#endif


