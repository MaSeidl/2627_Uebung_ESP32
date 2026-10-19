#include <Arduino.h>

const int LED_Pin = 2;

// Bekanntmachung
float leseTemerpatur();

void setup(){
Serial.begin(15200);
pinMode(LED_Pin, OUTPUT);

}

// Hier ist die Hauptschleife
void loop(){
    // Funktionen der Gruppe werden hier auferufen.
    float temperatur = leseTemerpatur();
    Serial.print("Temperatur: ");
    Serial.println(temperatur, 1);
    Serial.println(" C");
    delay(1000);
}

/*
@brief Liest die Temperatur aus dem Sensor
@return Die gelesene Temperatur
*/
float leseTemerpatur(){
    // Implementierung des Temperatursensors
    return 22.4; // Dummy-Wert
}