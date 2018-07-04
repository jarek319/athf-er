int FREQ = 600;

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  pinMode(4, INPUT);
}
void loop() {
  if(digitalRead(4)){
    digitalWrite(0, LOW);
    digitalWrite(1, HIGH);
    for (int i = 0; i < 5; i++) {
      digitalWrite(2, HIGH);
      delayMicroseconds(FREQ+i);
      digitalWrite(2, LOW);
      delayMicroseconds(FREQ+2*i);
    }
    delay(750);
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    delay(5000);
  }
}
