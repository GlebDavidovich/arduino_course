void setup() {
  pinMode(3, INPUT);
  digitalWrite(3, HIGH);
  Serial.begin(9600);
}

void loop() {
  int button_state = digitalRead(3);
  if (button_state == 1)
    Serial.print('1');

}
