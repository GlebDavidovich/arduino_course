void setup() {
  pinMode(3, INPUT);
  digitalWrite(3, HIGH);
  pinMode(4, INPUT);
  digitalWrite(4, HIGH);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  int button_state_3 = digitalRead(3);
  int button_state_4 = digitalRead(4);
  if (button_state_3 == 0)
  {
    digitalWrite(9,HIGH);
  }
  if (button_state_4 == 0)
  {
    digitalWrite(9,LOW);
  }

}
