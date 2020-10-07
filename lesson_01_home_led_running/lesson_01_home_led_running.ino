int a = 6;
void setup() {
  while (a != 13)
  {
    pinMode(a, OUTPUT);
    a++;
  }
}

int number = 6;
void loop() {
  while (number != 13)
  {
    digitalWrite(number, HIGH);
    delay(100);
    digitalWrite(number, LOW);
    delay(100);
    number++;
  }
  while (number != 6)
  {
    digitalWrite(number, HIGH);
    delay(100);
    digitalWrite(number, LOW);
    delay(100);
    number--;
  }
}
