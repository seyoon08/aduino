void setup() {
  pinMode(A0,INPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  Serial.println(analogRead(A0));
  if(analogRead(A0)<341) 
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  else if(341<=analogRead(A0)&& analogRead(A0)<682)
  {
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
  }
  else
  {
   digitalWrite(11,HIGH) ;
   digitalWrite(10,LOW);
   digitalWrite(9,LOW);
  }
}
