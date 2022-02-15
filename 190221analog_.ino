void setup() {
  pinMode(A0, INPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  Serial.println(analogRead(A0));
  digitalWrite(7,HIGH);
  delay(0);
  digitalWrite(7,LOW);
  delay(0);
} 

