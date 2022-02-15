void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  for(int i=0;i<5;i++)
  {
    digitalWrite(11,HIGH);
    delay(500);
    digitalWrite(11,LOW);
    delay(500);
  }
  for(int i=5;i>0;i--)
  {
    digitalWrite(10,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    delay(500);
  }
  for(int i=5;i>0;i--)
  {
    digitalWrite(9,HIGH);
    delay(500);
    digitalWrite(9,LOW);
    delay(500);

  }
}













































































































    
