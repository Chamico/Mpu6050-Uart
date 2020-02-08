#include "sys.h"
#include "delay.h"
#include "usart.h"

int main(void)
{	
	delay_init();	    //延时函数初始化	  
	uart_init(115200);
	while(1)
	{
		printf("good\n");
		delay_ms(100);
	}
}


 


