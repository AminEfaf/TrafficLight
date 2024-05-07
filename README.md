This project aims to simulate a traffic light system using a microcontroller, Proteus software, and two seven-segment displays.🚦💡💻🔄🔢🕒
The sequence of the traffic light consists of three main phases:

Green Light Phase (15 seconds): 🟢 The green light is on, indicating that the signal is available for a turn. This phase lasts for 15 seconds.
Yellow Light Phase (5 seconds): 💛 After the green light phase, the yellow light activates for 5 seconds. Meanwhile, the seven-segment displays show the number "88" during this interval.
Red Light Phase (15 seconds): 🔴 Following the yellow light phase, the red light turns on, indicating a stop sign. This phase also lasts for 15 seconds.
Repeat: 🔄 The cycle continuously repeats after the red light phase.

The Atmel Mega16 microcontroller is used to control the pins of port C and A connected to LEDs and seven-segment displays, utilizing delays to achieve the desired timing sequence.

The main code loop performs the following steps:

Turns on the green light (by setting the first pin of port C) and sequentially displays numbers 1 to 15 on the seven-segment displays (the second half of port A corresponds to the most significant digit, and the first half corresponds to the least significant digit).
Turns on the yellow light and turns off the green light, displaying "8" on the seven-segment displays, and waits for 5 seconds.
Turns on the red light and turns off the yellow light, sequentially displaying numbers 0 to 15 on the first seven-segment display.
*The cycle repeats continuously.
