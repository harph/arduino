// Example 03: Fade an LED in and out like
// a sleeping Apple Computer

const int LED = 13; // The pin for the LED
const int BUTTON = 7; // pin for the pushbutton
int state = LOW;
int val = 0;
int old_val = LOW;
int i = 0; // Count up and down

void setup() {
  pinMode(LED, OUTPUT); // Setting this pin as output
  pinMode(BUTTON, INPUT); // Setting this pin as input
}

void loop() {
  val = digitalRead(BUTTON);

  if (val && !old_val) {
    if (state) {
      for (int i = max_high; i < = 0; i++) {
        digitalWrite(LED, state);
      }
      state = LOW;
    } else {
      state = HIGH;
    }
  }
  
  old_val = val;

  
  delay(10);
}


