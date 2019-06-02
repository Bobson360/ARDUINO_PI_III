/**
 * Código para o dispositivo mestre escrever dados no escravo.
 * 
 * MESTRE: NODEMCU ESP12E
 * 
 * Autor: Nicholas Zambetti
 * Adaptações: Ana Paula Messina
 * 
 * 30/01/2019
 * 
 */

#include <Wire.h>

byte valor = 0xFF;

void setup()
{
  Wire.begin();
}

void loop()
{
  Wire.beginTransmission(0x0A);
  Wire.write("tecdicas ");  
  Wire.write(valor);           
  Wire.endTransmission();  

  delay(1000);
}
