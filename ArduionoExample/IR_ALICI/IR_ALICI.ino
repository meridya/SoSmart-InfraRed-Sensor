
#include <IRremote.h> 
IRrecv irrecv(PWM0); 
decode_results results;
void setup() {
  irrecv.enableIRIn();
  Serial.begin(9600); 
}
void loop() {
  if (irrecv.decode(&results)){ 
    Serial.println(results.value, HEX); 
    irrecv.resume();
  } 
}
