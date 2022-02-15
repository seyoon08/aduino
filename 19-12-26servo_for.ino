#include <Servo.h>

Servo s;
void setup() {
  s.attach(3);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  /*pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);*/
}

void loop() {
  if(digitalRead(7) == HIGH)
  {
    s.write(0);
  }
  else if(digitalRead(8) == HIGH)
  {
    s.write(180);
  }
  else
  {
    s.write(90);
  }
  /*for(int i=0;i<=255;i++)
  {
    analogWrite(11,i);
    delay(1);
  }
  for(int i=255;i>=0;i--)
  {
    analogWrite(11,i);
    delay(1);
  }
  for(int i=0;i<=255;i++)
  {
    analogWrite(9,i);
    delay(1);
  }
  for(int i=255;i>=0;i--)
  {
    analogWrite(9,i);
    delay(1);
  }
 for(int i=0;i<=255;i++)
  {
    analogWrite(10,i);
    delay(1);
  }
  for(int i=255;i>=0;i--)
  {
    analogWrite(10,i);
    delay(1);
  }*/
}
