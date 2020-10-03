void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

int a = 6;
void loop() {
  while (a != 13)
  {
    digitalWrite(a, HIGH);
    delay(10);
    digitalWrite(a, LOW);
    delay(10);
    a++;
  }
  while (a != 6)
  {
    digitalWrite(a, HIGH);
    delay(10);
    digitalWrite(a, LOW);
    delay(10);
    a--;
  }
}
