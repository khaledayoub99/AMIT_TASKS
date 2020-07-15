
#ifndef EXTERNAL_INT_H_
#define EXTERNAL_INT_H_

#include "BIT_Math.h"
#include "ATMEGA32_Regs.h"
#include "EXternal_INT_Cfg.h"

#define		GLOBAL_INT_EN	1
#define		GLOBAL_INT_DS	0

/******************** EXTERNAL INT ************************/

#define		EXTERNAL_INT0	6
#define		EXTERNAL_INT1	7
#define		EXTERNAL_INT2	5

#define		INT0_TRIGGER_LOW_LEVEL			0
#define		INT0_TRIGGER_RISING_EDGE		1
#define		INT0_TRIGGER_FALLING_EDGE		2
#define		INT0_TRIGGER_ANY_LOGICAL_CHANGE	3

#define		INT1_TRIGGER_LOW_LEVEL			0
#define		INT1_TRIGGER_RISING_EDGE		1
#define		INT1_TRIGGER_FALLING_EDGE		2
#define		INT1_TRIGGER_ANY_LOGICAL_CHANGE	3

#define		INT2_TRIGGER_RISING_EDGE		0
#define		INT2_TRIGGER_FALLING_EDGE		1


/******************** APIS ************************/

void SET_GlobalINTS(void);
void ExternalINT0_Init(void);
void ExternalINT1_Init(void);
void ExternalINT2_Init(void);



#endif /* EXTERNAL_INT_H_ */