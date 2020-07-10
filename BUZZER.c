#include "BUZZER.h"

void Buzzer_Init  (void)
{
	DIO_SetPinDir  (DIO_PORTA , DIO_PIN3 , DIO_PIN_OUTPUT);
}
void Buzzer_On    (void)
{
	DIO_WritePin       (DIO_PORTA  , DIO_PIN3 , DIO_PIN_HIGH  );
}
void Buzzer_Off   (void)
{
	DIO_WritePin       (DIO_PORTA , DIO_PIN3 , DIO_PIN_LOW    );
}