/*
    Loop made for kit fan
*/

int led = 11;
int fan_speed = 0;
int curr_state = 0;

// the setup routine runs once when you press reset:
void setup() {
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
    if (curr_state == 0) {
      fan_speed = 200;
      analogWrite(led, fan_speed);
      delay(3000);
      curr_state += 1;
    }
    
    if (curr_state == 1) {
      fan_speed = 223;
      analogWrite(led, fan_speed);
      delay(3000);
      curr_state += 1;
    }
    
    if (curr_state == 2) {
      fan_speed = 255;
      analogWrite(led, fan_speed);
      delay(3000);
      curr_state = 0;
    }
    
}
