#include <Servo.h>

Servo myservo;

void setup() 
{ 
  pinMode(13, OUTPUT);
  pinMode(3 , INPUT);
  myservo.attach(9);
  delay(1000);
} 

void loop() 
{
  if (digitalRead(3)){
    myservo.write(70);
    digitalWrite(13, HIGH);
    delay(500);
  }
  if (!digitalRead(3)){  
    myservo.write(0);
    digitalWrite(13, LOW);
    delay(500);
  }
}

