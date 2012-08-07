// Example 03: Fade an LED in and out like
// a sleeping Apple Computer

const int LED = 9; // The pin for the LED
int i = 0; // Count up and down

void setup() {
  pinMode(LED, OUTPUT); // Setting this pin as output
}

void loop() {
  for (i = 0; i< 255; i++) { // Loop from 0 to 254 (Fade in)
    analogWrite(LED, i); // sets the LED brightness
    delay(0); // this is because the analog write is instantaneos
               // so that means that without this it's not possible
               // to see any change.
  }
  
  for (i = 255; i > 0; i--) { // Loop from 255 to 1 (Fade out)
    analogWrite(LED, i); // sets the LED brightness
    delay(0);
  }
}

