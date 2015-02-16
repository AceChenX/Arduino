int pulsepin = 4;
int pulsenum = 120;
int dirpin = 5;
volatile int state = HIGH;

void setup(){
  pinMode(pulsepin, OUTPUT);
  pinMode(dirpin, OUTPUT);
  attachInterrupt(0, pulseout, RISING);
}

void loop(){

}

void pulseout(){
  digitalWrite(dirpin, state);
  delay(1);
  for (int i = 1; i <= pulsenum; i++) {
    digitalWrite(pulsepin, HIGH);
    delay(1);
    digitalWrite(pulsepin, LOW);
    delay(1);
  }
  state = !state;
}

