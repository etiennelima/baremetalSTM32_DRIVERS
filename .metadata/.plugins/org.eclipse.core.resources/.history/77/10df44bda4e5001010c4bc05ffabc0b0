/*
 * swo.c
 *
 *  Created on: Dec 30, 2025
 *      Author: etienne.lima
 */
#include "swo.h"
#include <stm32f4xx.h>
#include <stdio.h>

int __io_putchar(int ch)
{
	ITM_SendChar(ch);

	return ch;
}


void log_error(char *p)
{
	printf("log error : ");
	printf((char *) p);
	printf("\r\n");
}

void log_info(char *p)
{
	printf("Log info: ");
	printf((char *) p);
	printf("\r\n");
}

void log_debug(char *p)
{
	printf("Log Debug: ");
	printf((char *) p);
	printf("\r\n");
}
