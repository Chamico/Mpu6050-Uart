#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "mpu6050.h" 
#include "inv_mpu.h"
#include "inv_mpu_dmp_motion_driver.h" 
int main(void)
{	
	short aacx,aacy,aacz;		//加速度传感器原始数据
	short gyrox,gyroy,gyroz;	//陀螺仪原始数据
	short temp;					//温度	
	delay_init();	    //延时函数初始化	  
	uart_init(115200);
	MPU_Init();
	while(1)
	{
		temp=MPU_Get_Temperature();	//得到温度值
		MPU_Get_Accelerometer(&aacx,&aacy,&aacz);	//得到加速度传感器数据
		MPU_Get_Gyroscope(&gyrox,&gyroy,&gyroz);	//得到陀螺仪数据
		printf("*temp=%d;gyrox=%d;gyroy=%d;gyroz=%d;aacx=%d;aacy=%d;aacz=%d;*",temp,gyrox,gyroy,gyroz,aacx,aacy,aacz);
		delay_ms(50);
	}
}


 


