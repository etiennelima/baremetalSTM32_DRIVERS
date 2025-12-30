#include <stm32f4xx.h>
#include <stdio.h>
#include "uart.h"

#define SR_TC (1U << 6)

static void uart_flush(void)
{
    while (!(USART2->SR & SR_TC));
}

static void uart_write_string(const char *s)
{
    while (*s)
    {
        write_uart(*s++);
    }
}


int main(void){

	uart2_tx_init();

	while(1){
		uart_write_string("ABC\n\r");
		uart_flush();
		for (int i = 0; i < 100000; i++);
	}
}
