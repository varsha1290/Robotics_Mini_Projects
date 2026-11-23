# Components and Design Notes

| Component | Qty | Selection note |
|---|---:|---|
| Arduino UNO | 1 | UNO-compatible 5 V board |
| Indicator LED | 1 | Typical visible LED |
| Resistor | 1 | 330 Ω |
| Breadboard | 1 | Optional, recommended |
| Jumper wires | As needed | For breadboard wiring |
| USB data cable | 1 | Must support data |

## Current-limiting resistor
A first-order estimate is:

`R = (V_supply - V_LED) / I_LED`

For an illustrative 5 V supply, 2 V LED forward voltage and 10 mA target current:

`R = (5 - 2) / 0.010 = 300 ohms`

A 330 Ω resistor is a nearby standard value. Actual LED forward voltage varies by colour and part. Keep current within the LED and board ratings.

## Digital output
- `HIGH`: output is driven to logic high.
- `LOW`: output is driven to logic low.
- `pinMode(pin, OUTPUT)`: configures a pin as an output.
- `digitalWrite(pin, state)`: writes HIGH or LOW.
