#include <Arduino.h>

#define liquidsensorPin 11
#define pumpwaterPin 9
#define delayt

void llenado(){
  int valorliquidSensor = digitalRead(11);
  if (valorliquidSensor == 0)
  {
    digitalWrite(9, LOW);
  }else if (valorliquidSensor == 1)
  {
    digitalWrite(9, HIGH);
  }
  
}

void setup() {
  pinMode(11, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  llenado();
}
//esto es una prueba