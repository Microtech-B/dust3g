#include <main.h>
#include <ota.h>
#include <HTTPUpdate.h>


String getChipId()
{
  String ChipIdHex = String((uint32_t)(ESP.getEfuseMac() >> 32), HEX);
  ChipIdHex += String((uint32_t)ESP.getEfuseMac(), HEX);
  return ChipIdHex;
}


void update()
{
  String url = "http://otadrive.com/deviceapi/update?";
  url += MakeFirmwareInfo(ProductKey, Version);
  url += "&s=" + getChipId();

  httpUpdate.setLedPin(2);
  WiFiClient client;
  httpUpdate.update(client, url, Version);
}

