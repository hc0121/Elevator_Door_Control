#include "Arduino.h"
#include <ESP8266WiFi.h>
#ifndef WIFI_SET
#define WIFI_SET

const char* ssid = "barry-1"; // 設定欲連接無線網路名稱
const char* password = "22150157"; // 設定欲連接無線網路密碼

void WIFI()
{
    WiFi.begin(ssid, password);
    Serial.println("Connecting");
    while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
}; // end switch
#endif
