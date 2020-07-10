/*
 * GccApplication1.c
 *
 * Created: 5/07/2020 07:05:12 AM
 * Author : KHALEDMOHAMED
 */ 
#define F_CPU 16000000
#include <util/delay.h>
//#include "LED.h"
//#include "Button.h"
//#include "BUZZER.h"
//#include "7Segment.h"
#include "LCD.h"

int main(void)
{
    LCD_INIT();
	LCD_WrtieString("      ENG");
	LCD_GoTo(1,0);
	LCD_WrtieString(" KHALED AYOUB");
    while (1) 
    {
    }
}
