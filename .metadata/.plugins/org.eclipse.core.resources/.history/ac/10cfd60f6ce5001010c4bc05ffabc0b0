#include <stm32f4xx.h>
#include <string.h>

char _a[1] = {'\n'};
char *pt_a = _a;

char hello[] = "Hello im etienne";
char *pt_hello = hello;

int main(void){


		for(int i = 0; i < strlen(hello); i++)
		{
			ITM_SendChar(*pt_hello++);
		}

	while(1){
	}
}
