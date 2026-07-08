// This program is a test for the solenoid control. It uses a DigitalOut object to control a solenoid connected to pin PA_5. 
// The program turns the solenoid on and off every second in an infinite loop.
#include "mbed.h"

DigitalOut valve(PA_5); 

int main()
{
    valve = 0;

    while (1) {
        valve = 1;      // solenoid ON
        wait_ms(1000);

        valve = 0;      // solenoid OFF
        wait_ms(1000);
    }
}