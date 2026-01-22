const int ledPins[] = {10,11,12,13};
const int ledCount = 4;


void setup() {
  // put your setup code here, to run once:
  for (int i =0; i < ledCount;i++){
   pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i =0; i < ledCount;i++){
    digitalWrite(ledPins[i], HIGH);
  }
  
  delay(1000);

  for (int i=0; i < ledCount;i++){
    digitalWrite(ledPins[i], LOW);

  }
  
  delay(1000);

}
