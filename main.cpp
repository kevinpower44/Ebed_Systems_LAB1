#include "mbed.h"
#include <cstdio>

/*
// 1 input button
// 2 LEDs
if button is pressed (turn on led 1 and turn off led 2)
if button is released (turn on led 2 and turn off led 1)
*/



DigitalIn buttn(PC_13);
DigitalOut led1(LED1);
DigitalOut led2(LED2);


int main()
{
    while (1) {

        //if button is pressed led1 turns on and led2 off. When released opposite 
        if(buttn == 1){
            led1.write(1);
            led2.write(0);

        } else {
            led1 = 0;
            led2 = 1;
        }
    } 
}