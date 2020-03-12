/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fade
*/

int led = 11;           // the PWM pin the LED is attached to
int fan_speed = 0;    // how bright the LED is
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
