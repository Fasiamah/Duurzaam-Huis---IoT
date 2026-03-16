char A = random(999);
char B = random(999);
char C = random(999);
char D = random(999);

void setup() {
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(115200);
  
}

void loop() {


if (A > B || A < C){
  digitalWrite(6, HIGH);
}
  
if (C > A || A < B){
  digitalWrite(5, HIGH);
}

if (B > C || B  > A || C < A){
  digitalWrite(3, HIGH);
}
  
  delay(1000);
}
