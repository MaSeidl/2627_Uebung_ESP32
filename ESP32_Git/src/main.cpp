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
    delay(1000);
    float temperatur = leseTemerpatur();
    Serial.print("Temperatur: ");
    Serial.println(temperatur, 1);
    Serial.println(" C");
}

/*
@brief Liest die Temperatur aus dem Sensor
@return Die gelesene Temperatur
*/
float leseTemerpatur(){
    // Implementierung des Temperatursensors
    return 22.4; // Dummy-Wert
}