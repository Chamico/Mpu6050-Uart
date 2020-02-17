#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "mpu6050.h" 
#include "inv_mpu.h"
#include "inv_mpu_dmp_motion_driver.h" 
int main(void)
{	
	short aacx,aacy,aacz;		//���ٶȴ�����ԭʼ����
	short gyrox,gyroy,gyroz;	//������ԭʼ����
	short temp;					//�¶�	
	delay_init();	    //��ʱ������ʼ��	  
	uart_init(115200);
	MPU_Init();
	while(1)
	{
		temp=MPU_Get_Temperature();	//�õ��¶�ֵ
		MPU_Get_Accelerometer(&aacx,&aacy,&aacz);	//�õ����ٶȴ���������
		MPU_Get_Gyroscope(&gyrox,&gyroy,&gyroz);	//�õ�����������
		printf("*temp=%d;gyrox=%d;gyroy=%d;gyroz=%d;aacx=%d;aacy=%d;aacz=%d;*",temp,gyrox,gyroy,gyroz,aacx,aacy,aacz);
		delay_ms(50);
	}
}


 


