
// Define LED's
int BigLed = 0;
int LittleLed = 7;

// This is called once, on startup
void setup() {
  pinMode(BigLed, OUTPUT);
  pinMode(LittleLed, OUTPUT);
}

// This loop is called continuously
void loop(void) {
  Serial.println("Turning on BigLed");
  digitalWrite(BigLed, HIGH);
  digitalWrite(LittleLed, LOW);

  delay(1000);

  Serial.println("Turning off BigLed");
  digitalWrite(BigLed, LOW);
  digitalWrite(LittleLed, HIGH);

  delay(1000);
}
