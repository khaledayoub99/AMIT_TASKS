/*
 * GccApplication1.c
 *
 * Created: 5/07/2020 07:05:12 AM
 * Author : KHALEDMOHAMED
 */ 
#define F_CPU 16000000
#include <util/delay.h>

#include "LED.h"
//#include "Button.h"
//#include "BUZZER.h"
//#include "7Segment.h"
//#include "LCD.h"
//#include "KeyPad.h"
#include "EXternal_INT.h"
#include <avr/interrupt.h>


int main(void)
{
	ExternalINT0_Init();
	LED0_Init();
    while (1) 
    {
    }
}
ISR(INT0_vect)
{
	cli();
	LED0_toggle();
	sei();
}