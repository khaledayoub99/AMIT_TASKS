
#include "Button.h"
#define F_CPU 16000000UL
#include "util/delay.h"


                 /***********************************BUTTON0**********************************/

void Button0_Init(void)
{
	DIO_SetPinDir(DIO_PORTB,DIO_PIN0,DIO_PIN_INPUT);
}

uint8 Button0_GetValue(void)
{
	uint8 value = 0;
	DIO_ReadPin (DIO_PORTB , DIO_PIN0 , &value);
	
	while(GET_BIT(PINB,0));
	
	_delay_ms(20);
	
	return value;
}

                 /***********************************BUTTON1**********************************/

void Button1_Init(void)
{
	DIO_SetPinDir(DIO_PORTB,DIO_PIN4,DIO_PIN_INPUT);
	
}

uint8 Button1_GetValue(void)
{
	uint8 value = 0;
	DIO_ReadPin (DIO_PORTB , DIO_PIN4 , &value);
	
	while(GET_BIT(PINB,4));
	
	_delay_ms(20);
	
	return value;
}

                 /***********************************BUTTON2**********************************/
void Button2_Init(void)
{
	
	
	DIO_SetPinDir(DIO_PORTD,DIO_PIN2,DIO_PIN_INPUT);
	
}

uint8 Button2_GetValue(void)
{
	uint8 value = 0;
	DIO_ReadPin (DIO_PORTD , DIO_PIN2 , &value);
	

	while((GET_BIT(PIND,2)));
	

	_delay_ms(20);
	
	return value;
}