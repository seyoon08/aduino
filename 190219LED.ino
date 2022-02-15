void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
 /* digitalWrite(4,HIGH);
  delay(50);
  digitalWrite(4,LOW);
  delay(50);
  digitalWrite(3,HIGH);
  delay(50);
  digitalWrite(3,LOW);
  delay(50);
  digitalWrite(2,HIGH);
  delay(50);
  digitalWrite(2,LOW);
  delay(50);*/
  digitalWrite(4,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(50);
  digitalWrite(4,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}
