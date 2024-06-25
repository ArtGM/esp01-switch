#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

#include <index_html.h>
#include <picocss.h>

ESP8266WebServer server(80);

const char* ssid = "SSID"; // Freebosx--- 
const char* password = "PASSWORD"; // 1234567890

// put function declarations here:
#define SWITCH_PIN 0 // Numero du PIN (constante)

void indexRoot() {
  server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200, "text/html", index_html);
}

void switchOn() {
  digitalWrite(SWITCH_PIN, LOW);
  server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200, "text/plain", "ON");

}

void switchOff() {
  digitalWrite(SWITCH_PIN, HIGH);
  server.sendHeader("Access-Control-Allow-Origin", "*");
  server.send(200, "text/plain", "OFF");
}


void setup() {
  Serial.begin(9600);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while(WiFi.waitForConnectResult() != WL_CONNECTED) {
    delay(5000);
    ESP.restart();
  }

  pinMode(SWITCH_PIN, OUTPUT); // 40mA max 
  digitalWrite(SWITCH_PIN, HIGH);

  server.on("/", indexRoot);
  server.on("/index.html", indexRoot);
  server.on("/switch-on", switchOn);
  server.on("/switch-off", switchOff);
  server.on("/pico.min.css", []() {
    server.send(200, "text/css", pico_css);
  });

  server.begin();

}

void loop() {
  if (WiFi.isConnected()) {
    server.handleClient();
  }
}
