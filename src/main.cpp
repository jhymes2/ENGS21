#include <Arduino.h>

#define PIN_RELAY_BELAY   2
#define PIN_RELAY_BRUSH   3
#define PIN_RELAY_SPRAY   4
#define PIN_SIGNAL_LIGHT  LED_BUILTIN

void setup() {
  pinMode(PIN_RELAY_BELAY,  OUTPUT);
  pinMode(PIN_RELAY_BRUSH,  OUTPUT);
  pinMode(PIN_RELAY_SPRAY,  OUTPUT);
  pinMode(PIN_SIGNAL_LIGHT, OUTPUT);

  digitalWrite(PIN_RELAY_BELAY,  LOW);
  digitalWrite(PIN_RELAY_BRUSH,  LOW);
  digitalWrite(PIN_RELAY_SPRAY,  LOW);
  digitalWrite(PIN_SIGNAL_LIGHT, LOW);
}

void loop() {
  digitalWrite(PIN_RELAY_BELAY,  HIGH);
  digitalWrite(PIN_RELAY_BRUSH,  HIGH);
  digitalWrite(PIN_RELAY_SPRAY,  HIGH);
  digitalWrite(PIN_SIGNAL_LIGHT, HIGH);
  delay(1000);

  digitalWrite(PIN_RELAY_BELAY,  LOW);
  digitalWrite(PIN_RELAY_BRUSH,  LOW);
  digitalWrite(PIN_RELAY_SPRAY,  LOW);
  digitalWrite(PIN_SIGNAL_LIGHT, LOW);
  delay(2000);
}
