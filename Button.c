
#include "Button.h"
#define F_CPU 16000000UL
#include "util/delay.h"


                 /***********************************BUTTON0**********************************/

void Button0_Init(void)
{
	/*Clear the bit number 4 in the DDRB Register to set it's direction as input*/
	DIO_SetPinDir(DIO_PORTB,DIO_PIN0,DIO_PIN_INPUT);
	
}

uint8 Button0_GetValue(void)
{
	uint8 value = 0;
	/*check the INPUT value ON The bit number 4 in PINB Register*/
	DIO_ReadPin (DIO_PORTB , DIO_PIN0 , &value);
	
	/*wait till the button is released*/
	while(GET_BIT(PINB,0));
	
	/*wait 20 ms for the bouncing*/
	_delay_ms(20);
	
	return value;
}

                 /***********************************BUTTON1**********************************/

/**************************This function Initialize the Button1 on AMIT Kit************************/
void Button1_Init(void)
{
	/*Clear the bit number 4 in the DDRB Register to set it's direction as input*/
	DIO_SetPinDir(DIO_PORTB,DIO_PIN4,DIO_PIN_INPUT);
	
}

uint8 Button1_GetValue(void)
{
	uint8 value = 0;
	/*check the INPUT value ON The bit number 4 in PINB Register*/
	DIO_ReadPin (DIO_PORTB , DIO_PIN4 , &value);
	
	/*wait till the button is released*/
	while(GET_BIT(PINB,4));
	
	/*wait 20 ms for the bouncing*/
	_delay_ms(20);
	
	return value;
}

                 /***********************************BUTTON2**********************************/
void Button2_Init(void)
{
	/*Clear the bit number 4 in the DDRB Register to set it's direction as input*/
	DIO_SetPinDir(DIO_PORTD,DIO_PIN2,DIO_PIN_INPUT);
	
}

uint8 Button2_GetValue(void)
{
	uint8 value = 0;
	/*check the INPUT value ON The bit number 4 in PINB Register*/
	DIO_ReadPin (DIO_PORTD , DIO_PIN2 , &value);
	
	/*wait till the button is released*/
	while(GET_BIT(PIND,2));
	
	/*wait 20 ms for the bouncing*/
	_delay_ms(20);
	
	return value;
}