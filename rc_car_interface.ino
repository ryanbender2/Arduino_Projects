/*
    What is currently known about the car's control thus far:

        Turning works with digital write from HIGH to LOW. 
            LOW is full power, HIGH is off.
        
        Turning with analog write works. So far it looks like it is still a binary
            choice of full power and off. 255 is full power and 0 - ~150 is off. However, it
            is still not certain if this is analog's true behavior. 

        Forward and backwards has not been tested thus far.
*/

int led = 6;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(led, brightness);

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
