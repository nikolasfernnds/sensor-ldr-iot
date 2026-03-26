#define LDR_PIN 34
#define LED_PIN 2

int limite = 2000; // ajuste conforme seu ambiente

void setup() {
  Serial.begin(19200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int valor = analogRead(LDR_PIN);

  if (valor < limite) {
    Serial.println("Claro!");
    digitalWrite(LED_PIN, HIGH);
  } else {
    Serial.println("Escuro");
    digitalWrite(LED_PIN, LOW);
  }

  delay(500);
}