#include <Servo.h>

Servo myservo;

void setup() 
{ 
  pinMode(0, INPUT);
  myservo.attach(9);
  delay(1000);
} 

void loop() 
{
  if (digitalRead(3)){
    myservo.write(70);
    delay(500);
  }
  if (!digitalRead(3)){  
    myservo.write(0);
    delay(500);
  }
}

