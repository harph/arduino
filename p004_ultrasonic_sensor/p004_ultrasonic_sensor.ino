/*
Experimenting with the ultrasonic sensor HC-SR04
*/

const int TRIG_PIN = 8;
const int ECHO_PIN = 9;


void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  digitalWrite(TRIG_PIN, HIGH);
  digitalWrite(TRIG_PIN, LOW);
  int duration = pulseIn(ECHO_PIN, HIGH);
  int distance = microsecondsToCentimeters(duration);
  Serial.println(duration);
  Serial.println(distance);
  Serial.println("----");
  
  delay(1000);
}

long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}
