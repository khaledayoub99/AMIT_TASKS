

#include "7Segment.h"
#include "LED.h"
#define F_CPU 16000000
#include <util/delay.h>

void _7Segment0_Init      (     void     )
{
	DIO_SetPortDir (DIO_PORTA,DIO_PORT_OUTPUT);
	DIO_SetPinDir  (DIO_PORTB,DIO_PIN1,DIO_PIN_OUTPUT);
	
}
void _7Segment0_Enable        (    void    )
{
	DIO_WritePin   (DIO_PORTB,DIO_PIN1,DIO_PIN_HIGH);
}
void _7Segment0_On        (   uint8 val  )
{
	  DIO_WritePort  (DIO_PORTA,val<<4);
}
void _7Segment0_OFF       (     void     )
{
	DIO_WritePin   (DIO_PORTB,DIO_PIN1,DIO_PIN_LOW);
}

