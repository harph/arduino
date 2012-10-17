// Example 03: Fade an LED in and out like
// a sleeping Apple Computer

const int LED = 13; // The pin for the LED
const int BUTTON = 7; // pin for the pushbutton
int state = false;
int val = 0;
int old_val = 0;
int i = 0; // Count up and down

void setup() {
  pinMode(LED, OUTPUT); // Setting this pin as output
}

void loop() {
  val = digitalRead(BUTTON);
  if (val && (old_val == 0)) {
    state = 1 - state;
    delay(10);
  }
  old_val = val;
  if (state == 1) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}


