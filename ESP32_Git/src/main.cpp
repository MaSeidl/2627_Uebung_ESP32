#include <Arduino.h>

const int LED_Pin = 2;

void setup(){
Serial.begin(15200);
pinMode(LED_Pin, OUTPUT);

}

// Hier ist die Hauptschleife
void loop(){
    // Funktionen der Gruppe werden hier auferufen.
    delay(1000);

}