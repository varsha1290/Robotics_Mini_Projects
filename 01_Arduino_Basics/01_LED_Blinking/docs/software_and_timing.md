# Software and Timing

`LED_PIN` identifies the output. `BLINK_INTERVAL_MS` defines the time between state changes. `ledState` stores the current requested state, and `previousToggleTime` stores the previous toggle timestamp.

The loop checks:

`currentTime - previousToggleTime >= BLINK_INTERVAL_MS`

When true, it updates the timestamp, inverts the state and writes the new output.

`millis()` allows the program to keep looping while time passes. Unlike `delay()`, it does not deliberately block the main loop. Unsigned elapsed-time subtraction is the standard Arduino pattern for handling `millis()` rollover when using short intervals.

The LED is ON for about 1000 ms and OFF for about 1000 ms. One full cycle is about 2000 ms, or 0.5 Hz.
