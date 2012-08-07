// Example 02: Turn on LED while the button is pressed

const int LED = 13; // The pin for the LED
const int BUTTON = 7; // The input pin where the
                      // pushbutton is connected
int val = 0;

int old_val = 0;

int state = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON); // Read input value and store it
  // Sends the value of the button to the LED pin
  if ((val == HIGH) && (old_val == LOW)) {
    state = 1 - state;
    delay(10); // Simple way to do de-bouncing
  }
  
  // We need this to keep the previous value
  // due to the high speed of the Arduino
  // processor
  old_val = val;
  
  if (state == 1) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}
