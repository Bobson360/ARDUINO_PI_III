/**
 * Código para o dispositivo escravo receber dados do mestre.
 * 
 * SLAVE: ARDUINO NANO ATMEGA328P
 * 
 * Autor: Nicholas Zambetti
 * Adaptações: Ana Paula Messina
 * 
 * 30/01/2019
 * 
 */

#include <Wire.h>

void setup()
{
  Wire.begin(0x0A);                
  Wire.onReceive(receiveEvent); 
  Serial.begin(9600);          
}

void loop() {}

void receiveEvent(int numBytes)
{
  while (1 < Wire.available())
  { 
    char td = Wire.read();
    Serial.print(td);        
  }
  int valor = Wire.read();    
  Serial.println("");
  Serial.println(valor, HEX);   
  Serial.println(valor, BIN);
  Serial.println(valor, OCT);
  Serial.println(valor);       
}
