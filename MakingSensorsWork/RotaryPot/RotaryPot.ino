
const int potPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
}

void loop() {
  int rawValue = analogRead(potPin);

  float percentage = (rawValue / 1023.0) * 100.0;

  Serial.print("Raw ADC Value: ");
  Serial.print(rawValue);

  Serial.print("\tPosition: ");
  Serial.print(percentage, 1);
  Serial.println("%");

  delay(200);
}
