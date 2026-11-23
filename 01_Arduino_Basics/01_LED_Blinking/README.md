# LED Blinking using Arduino UNO

**Classification:** Reconstructed reference implementation  
**Original source code:** Not available  
**Physical retest:** Not yet performed

## 1. Project overview
This beginner embedded-systems project repeatedly switches an LED ON and OFF using an Arduino UNO digital output. It introduces GPIO configuration, digital output states, current limiting and program timing.

This is newly written reference material, not the original source code from the earlier project.

## 2. Objectives
- Configure a microcontroller pin as a digital output.
- Drive an LED through a current-limiting resistor.
- Generate a repeating ON/OFF sequence.
- Understand `pinMode()`, `digitalWrite()` and `millis()`.

## 3. Components
| Component | Qty | Purpose |
|---|---:|---|
| Arduino UNO or compatible board | 1 | Microcontroller |
| LED | 1 | Visual indicator |
| 330 Ω resistor | 1 | Limits LED current |
| Breadboard | 1 | Prototyping |
| Jumper wires | As needed | Connections |
| USB data cable | 1 | Programming and power |

## 4. Circuit connections
| Arduino / component | Connection |
|---|---|
| D8 | 330 Ω resistor |
| Other resistor lead | LED anode (long leg) |
| LED cathode (short leg / flat-side lead) | GND |

```text
Arduino D8 --- 330 ohm resistor --- LED anode (+)
                                      LED cathode (-) --- GND
```

The resistor and LED are in series. Observe LED polarity. To use the built-in UNO LED instead, change `LED_PIN` to `LED_BUILTIN`; no external LED wiring is then needed.

## 5. Working principle
1. `setup()` runs once after reset.
2. `pinMode(LED_PIN, OUTPUT)` configures D8 as an output.
3. `millis()` provides elapsed time since the sketch started.
4. When 1000 ms have elapsed since the last toggle, the program inverts the LED state.
5. `digitalWrite()` sets the pin HIGH or LOW.
6. `loop()` repeats continuously.

The implementation uses non-blocking timing with `millis()` rather than pausing the processor with `delay()`.

## 6. Timing
| Parameter | Value |
|---|---:|
| ON interval | 1000 ms |
| OFF interval | 1000 ms |
| Full ON/OFF cycle | 2000 ms |
| Approximate frequency | 0.5 Hz |

## 7. Software requirements
- Arduino IDE 2.x or compatible environment
- Arduino AVR Boards package for UNO
- USB data cable
- No third-party library required

## 8. Upload procedure
1. Open `src/led_blinking.ino` in Arduino IDE.
2. Connect the UNO using a USB data cable.
3. Select Tools → Board → Arduino AVR Boards → Arduino UNO.
4. Select the correct port under Tools → Port.
5. Click Verify, then Upload.
6. Observe the LED connected to D8.

## 9. Expected result
The LED should remain ON for approximately one second, OFF for approximately one second, and repeat while the board is running.

## 10. Testing checklist
| Test | Expected result | Actual result |
|---|---|---|
| Compile sketch | No compile errors | Not tested |
| Upload sketch | Upload completes | Not tested |
| LED ON | LED illuminates | Not tested |
| LED OFF | LED turns off | Not tested |
| Repeating cycle | ON/OFF repeats | Not tested |
| Timing | About 1 s per state | Not measured |

Only change the test results after testing the physical board.

## 11. Troubleshooting
- LED does not light: check polarity, D8, resistor and GND.
- Port missing: check the USB data cable, driver and board connection.
- Upload fails: verify board and port selection.
- LED is dim: inspect resistor and wiring; do not remove the current-limiting resistor.
- Using onboard LED: set `LED_PIN` to `LED_BUILTIN`.

## 12. Design and safety
An LED requires current limiting. A first-order estimate is `R = (V_supply - V_LED) / I_LED`. For an illustrative 5 V supply, 2 V LED forward voltage and 10 mA target current, R = 300 Ω; 330 Ω is a nearby standard value. Actual LED forward voltage varies. Stay within the LED and Arduino board ratings. Never short an output pin directly to GND or 5 V.

## 13. Learning outcomes
Understand digital HIGH/LOW, GPIO output configuration, LED polarity, current limiting and non-blocking timing.

## 14. Provenance
This is a **reconstructed reference implementation** created because the original sketch, photographs and test records were not available. It is not evidence that this code was used in or physically tested during the earlier project.

## 15. Future improvements
- Add push-button control.
- Create multiple-LED sequences.
- Implement traffic-light and SOS patterns.
- Add serial commands to change blink timing.
- Combine blinking with other non-blocking tasks.
