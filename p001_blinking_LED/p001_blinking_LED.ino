// Example 01: Blinking LED

const int LED = 13; // LED connected to digital pin 13

void setup() {
  pinMode(LED, OUTPUT); // Sets the digital pin as output
}

void loop() {
  digitalWrite(LED, HIGH); // turns the LED on
  delay(1000); // wait a second
  digitalWrite(LED, LOW); // turn the LED off
  delay(1000); // wait a second
}
