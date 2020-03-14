/*
    What is currently known about the car's control thus far:

        Turning works with digital write from HIGH to LOW. 
            LOW is full power, HIGH is off.
        
        Turning with analog write works. So far it looks like it is still a binary
            choice of full power and off. 255 is full power and 0 - ~150 is off. However, it
            is still not certain if this is analog's true behavior. 

        Forward and backwards has not been tested thus far.
*/

int left_turn = 6;
int power = 0;

void setup() {
    pinMode(left_turn, OUTPUT);
}

void loop() {
    digitalWrite(left_turn, HIGH);
    delay(1000);
    digitalWrite(left_turn, LOW);
    delay(2000);
    digitalWrite(left_turn, HIGH);
    delay(1000);
    digitalWrite(left_turn, LOW);
    delay(1000);
}