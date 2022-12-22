// adding this because we are working in arduino development framework
#include <Arduino.h>

void setup()
{
    pinMode(2, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    digitalWrite(2, HIGH);
    Serial.println("Light is ON");
    delay(5000);
    digitalWrite(2, LOW);
    Serial.println("Light is OFF");
    delay(5000);
}