#include <Servo.h>

Servo myservo;

void setup() 
{ 
  attachInterrupt(3, OpenShutter, RISING);
  attachInterrupt(3, CloseShutter, FALLING);
  myservo.attach(9);
  delay(1000);
} 

void loop() 
{
  
}

void OpenShutter()
{
  myservo.write(70);
  digitalWrite(13, HIGH);
  delay(500);
}

void CloseShutter()
{
  myservo.write(0);
  digitalWrite(13, LOW);
  delay(500);
}
