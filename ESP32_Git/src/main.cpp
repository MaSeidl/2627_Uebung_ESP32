#include <Arduino.h>
// Hier ist der Public-Bereich

// Bekanntmachung
float leseTemerpatur();

// Hier ist der Setup Bereich
void setup(){

}

// Hier ist die Hauptschleife
void loop(){
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