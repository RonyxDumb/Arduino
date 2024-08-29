/*
  Blink

  data: 28/08/2024
  autori@ Francesco Pio Pipino & Vincenzo Priore
  

  Codice di dominio pubblico
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// funzione attivata quando si clicca il tasto RESET o POWER sulla scheda madre
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// funzione che si avvia in loop
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // accende il LED (HIGH è il livello del voltage)
  delay(1000);                      // aspetta 1000 mls
  digitalWrite(LED_BUILTIN, LOW);   // spegne il LED
  delay(1000);                      // aspetta 1000 mls
}
