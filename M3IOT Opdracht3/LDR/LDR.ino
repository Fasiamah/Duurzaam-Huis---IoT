void setup() {
  Serial.begin(115200);
  pinMode(6, OUTPUT);
}

void loop() {
  int ldr_value = analogRead(A0);

  Serial.print("{\"ldr\": ");
  Serial.print(ldr_value);
  Serial.println("}");

  if (ldr_value < 500) {
    
    int delayTime = random(100, 501);
    digitalWrite(6, HIGH);
    delay(delayTime);
    digitalWrite(6, LOW);
    delay(delayTime);
  } else {
    // Als het licht is → LED uit
    digitalWrite(6, LOW);
    delay(500);
  }
}
