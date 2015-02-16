#include <EEPROM.h>

int pin;
int address = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

void loop()
{
  for (int pin=0; pin <= 23; pin++){
    int value = EEPROM.read(address);
    digitalWrite(pin, value);
    address++;
  }
  __asm__("nop\n\t");
}
