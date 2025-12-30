#include <stm32f4xx.h>
#include <string.h>
#include <stdio.h>

char _a[1] = {'\n'};
char *pt_a = _a;

char hello[] = "Hello im etienne";
char *pt_hello = hello;

int __io_putchar(int ch)
{
	ITM_SendChar(ch);

	return ch;
}

int main(void){

 	printf("we can use printf\n");

	while(1){
	}
}
