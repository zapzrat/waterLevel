const int waterLavel = 12;
const int ledStatus =  13;

int buttonState = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Micro Project Thailand ~^.^~ ");

  pinMode(ledStatus, OUTPUT);
  pinMode(waterLavel, INPUT);
}

void loop() {
  buttonState = digitalRead(waterLavel);

  if (buttonState == HIGH) {
    digitalWrite(ledStatus, HIGH);
    Serial.println("Status Water lavel : HIGH");
  } else {
    digitalWrite(ledStatus, LOW);
    Serial.println("Status Water lavel : LOW");
  }

  delay(200);
}
