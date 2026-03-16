char a = 0b01100001;
char b = 0b01100010;
char c = 0b01000011;
char d = 0b01000100;
  
void setup() {
  Serial.begin(115200);
  
}

void loop() {
  Serial.println(a);
  delay(1000);
}
