#include "stm32f4xx.h"

#define GPIOCEN	(1U<<2)
#define PIN13	(1U<<13)
#define BTN_PIN	PIN13


uint8_t btn_state;

int main()
{
	/*ENABLE CLOCK ACCESS TO AHB1**/
	RCC->AHB1ENR = GPIOCEN;

	/*SET PC13 AS INPUT PIN*/
	GPIOC->MODER &= ~(1U<<27);
	GPIOC->MODER &= ~(1U<<26);


	while(1)
	{
		/*CHECK IF BTN IS UNPRESSED*/
		if (GPIOC->IDR & BTN_PIN)
		{
			btn_state = 0;
		}
		else
		{
			btn_state = 1;
		}

		for(int i = 0; i < 100000; i++);
	}
}
