// Example 03: Fade an LED in and out like
// a sleeping Apple Computer

const int LED = 13; // The pin for the LED
int state = 129; // Count up and down
int inc = 1;
void setup() {
  pinMode(LED, OUTPUT); // Setting this pin as output
}

void loop() {
  if (state == 128 || state == 255)
    inc *= -1;
  state += inc;
  analogWrite(LED, state);
  delay(50);
}


