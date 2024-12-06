#include <Ethernet.h>
#include <SPI.h>

int RELAY_PIN = 7;
int relayState = 0;
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(192,168,1,177);
EthernetServer server(80);

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  Ethernet.begin(mac, ip);
  server.begin();
}

void loop() {
  EthernetClient client = server.available();
  if (client) {
    while (client.connected()) {
      if (client.available()) {
        relayState = ~relayState;
        digitalWrite(RELAY_PIN, relayState);
        delay(1);
        client.stop();
      }
    }
  }
}
