/*
  LED Blinking using Arduino UNO
  Reconstructed reference implementation.
  Original user source code: not available.
  Physical hardware test: not yet performed.

  D8 -> 330 ohm resistor -> LED anode (+)
  LED cathode (-) -> GND
  For the onboard LED, change LED_PIN to LED_BUILTIN.
*/

const uint8_t LED_PIN = 8;
const unsigned long BLINK_INTERVAL_MS = 1000;

bool ledState = LOW;
unsigned long previousToggleTime = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, ledState);
}

void loop() {
  const unsigned long currentTime = millis();

  if (currentTime - previousToggleTime >= BLINK_INTERVAL_MS) {
    previousToggleTime = currentTime;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
  }
}
