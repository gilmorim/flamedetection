/**
 * 
 * @file	flamedetect.ino
 * @github	https://github.com/gilmorim
 * @author	Gilberto Morim <gilgmorim@gmail.com>
 * @date	2020-03-25
 * @brief	Arduino code to receive signal from flame detection sensor, and activate buzzer when it does so.
 * 
 */

#include <SoftwareSerial.h>

#define PIN_FLAME_SENSOR 2
#define PIN_BUZZER 3

void setup()
{
  Serial.begin(9600);
  Serial.println("Starting test...");
  pinMode(PIN_FLAME_SENSOR, INPUT);
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop()
{
  int fire = digitalRead(PIN_FLAME_SENSOR);

  if (fire == HIGH)
  {
    digitalWrite(PIN_BUZZER, HIGH);
    // Serial.println("Fire!");
  }
  else
  {
    digitalWrite(PIN_BUZZER, LOW);
    // Serial.println("Peace...");
  }

  delay(200);
}
