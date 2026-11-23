# Circuit Connections

| Arduino UNO pin / part | Connect to |
|---|---|
| D8 | One end of 330 Ω resistor |
| Other resistor end | LED anode (long leg) |
| LED cathode (short leg / flat edge) | GND |

```text
D8 ---- [330 ohm] ---- LED anode (+)
                       LED cathode (-) ---- GND
```

This is a text wiring guide, not an original photograph or PCB schematic. Confirm polarity before powering the board.

## Onboard LED option
Set `LED_PIN` to `LED_BUILTIN`. The onboard indicator already includes its resistor; no external LED wiring is needed.
