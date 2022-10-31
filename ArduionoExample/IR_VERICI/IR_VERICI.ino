int out=5;
void setup(){
  pinMode(out,OUTPUT); 
  }
 void loop(){
  digitalWrite(out,HIGH);
  delay(0.026);
  digitalWrite(out,LOW);
  delay(0.026);
  }
