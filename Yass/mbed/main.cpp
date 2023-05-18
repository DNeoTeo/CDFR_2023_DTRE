/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <robot.hpp>
//#define BLINKING_RATE     500ms

int main()
{
/*
     

    while (true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE);
    }
*/
    DigitalOut led(LED1);
    ROBOT caviste(D2, D3, D0, D1, D6, D7);
    caviste.init();
    
    while(true)
    {
        //printf("run\n");
        caviste.setSpeed(0.3, 0.3, 0.3);
        led = 1;
        //ThisThread::sleep_for(5s);
        //printf("stop\n");
        //caviste.stop();
        //led = 0;
        //ThisThread::sleep_for(5s);

    }
}