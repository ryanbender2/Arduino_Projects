
// pins to remote controls
// 5 = forward
// 6 = backwards
// 9 = turn left
// 10 = turn right
// 11 = turbo
int controls[5] = {5, 6, 9, 10};
char c;

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);
  Serial.println("<Arduino is ready>");
  for (int control : controls) {
    pinMode(control, OUTPUT);
    digitalWrite(control, HIGH);
  }
}

void loop() {
  /*
  for (int control : controls) {
    digitalWrite(control, LOW);
    delay(1000);
    digitalWrite(control, HIGH);
    delay(1000);
  }
  */
}
