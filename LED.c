
#include "LED.h"

          /*********************************LED0**************************************/
		  
void LED0_Init(void)
{
	
	/*set the bit number 2 in the DDRC Register to initiate the pin's direction as output*/
	DIO_SetPinDir  (DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);
	
}

/************** This function Turns on the LED0 in the AMIT kit ****************************/
void LED0_ON(void)
{
	/*set the bit number 2 in the PORTC Register to generate 5v*/
	DIO_WritePin(DIO_PORTC,DIO_PIN2,DIO_PIN_HIGH);	
}

/************** This function Turns off the LED0 in the AMIT kit ****************************/
void LED0_OFF(void)
{
	DIO_WritePin   (DIO_PORTC,DIO_PIN2,DIO_PIN_LOW);
}

/************** This function Toggles the LED0 in the AMIT kit ****************************/
void LED0_toggle(void)
{
	/*toggle the value in the bit number 2 in the PORTC Registe */
	DIO_ToqqlePin  (DIO_PORTC,DIO_PIN2);
	
}

          /*********************************LED1**************************************/
		  
/************** This function Initialises the LED1 in the AMIT kit ****************************/
void LED1_Init(void)
{
	
	/*set the bit number 2 in the DDRC Register to initiate the pin's direction as output*/
	DIO_SetPinDir  (DIO_PORTC,DIO_PIN7,DIO_PIN_OUTPUT);
	
}

/************** This function Turns on the LED1 in the AMIT kit ****************************/
void LED1_ON(void)
{
	/*set the bit number 2 in the PORTC Register to generate 5v*/
	DIO_WritePin(DIO_PORTC,DIO_PIN7,DIO_PIN_HIGH);
}

/************** This function Turns off the LED1 in the AMIT kit ****************************/
void LED1_OFF(void)
{
	DIO_WritePin   (DIO_PORTC,DIO_PIN7,DIO_PIN_LOW);
}

/************** This function Toggles the LED1 in the AMIT kit ****************************/
void LED1_toggle(void)
{
	/*toggle the value in the bit number 2 in the PORTC Registe */
	DIO_ToqqlePin  (DIO_PORTC,DIO_PIN7);
	
}
		  
		  /*********************************LED2**************************************/
		  
/************** This function Initialises the LED2 in the AMIT kit ****************************/
void LED2_Init(void)
{
	
	/*set the bit number 2 in the DDRC Register to initiate the pin's direction as output*/
	DIO_SetPinDir  (DIO_PORTD,DIO_PIN3,DIO_PIN_OUTPUT);
	
}

/************** This function Turns on the LED2 in the AMIT kit ****************************/
void LED2_ON(void)
{
	/*set the bit number 2 in the PORTC Register to generate 5v*/
	DIO_WritePin(DIO_PORTD,DIO_PIN3,DIO_PIN_HIGH);
}

/************** This function Turns off the LED2 in the AMIT kit ****************************/
void LED2_OFF(void)
{
	DIO_WritePin   (DIO_PORTD,DIO_PIN3,DIO_PIN_LOW);
}

/************** This function Toggles the LED2 in the AMIT kit ****************************/
void LED2_toggle(void)
{
	/*toggle the value in the bit number 2 in the PORTC Registe */
	DIO_ToqqlePin  (DIO_PORTD,DIO_PIN3);
	
}