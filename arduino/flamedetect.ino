#include <SoftwareSerial.h>

#define PIN_FLAME_SENSOR 2
#define PIN_BUZZER 3

void setup(){
  Serial.begin(9600);
  Serial.println("Starting test...");
  pinMode(PIN_FLAME_SENSOR, INPUT);
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop(){
  int fire = digitalRead(FLAME);

  if(fire == HIGH){
    digitalWrite(BUZZ, HIGH);
    // Serial.println("Fire!");  
  } else {
    digitalWrite(BUZZ, LOW);
    // Serial.println("Peace...");  
  }

  delay(200);
}
