#include "sys.h"
#include "delay.h"
#include "usart.h"

int main(void)
{	
	delay_init();	    //��ʱ������ʼ��	  
	uart_init(115200);
	while(1)
	{
		printf("good\n");
		delay_ms(100);
	}
}


 


