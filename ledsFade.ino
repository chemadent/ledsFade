const int ledCount = 6;

int ledPins[] = {
  3, 5, 6,
  9, 10, 11
};  // an array of pin numbers to which LEDs are attached  
  
void setup(){
  // loop over the pin array and set them all to output:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop(){
    for (int thisLed = 0; thisLed < ledCount; thisLed++){
        for (int i = 0; i < 255; i++){
            analogWrite(ledPins[thisLed], i);
            delay(3);
        }
        for (int i = 255; i > 0; i--){
            analogWrite(ledPins[thisLed], i);
            delay(3);
        }
  
        delay(50);
    //    digitalWrite(ledPins[thisLed], HIGH);
    //    delay(800);
    //    digitalWrite(ledPins[thisLed], LOW);
    //    delay(50);
    }
}
