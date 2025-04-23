void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP); // Botão no pino 2
}

void loop() {
  if (digitalRead(2) == LOW) {
    Serial.println("P");  // Pedido de mamadeira
    delay(1000);          // Evita múltiplos envios rápidos
  }
}
