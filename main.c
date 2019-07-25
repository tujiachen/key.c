#include "led.h"
#include "delay.h"
#include "sys.h"
#include "key.h"
int main(void)
{
u8 t;
delay_init(); //��ʱ������ʼ��
LED_Init(); //��ʼ����LED���ӵ�Ӳ���ӿ�
KEY_Init(); //��ʼ���밴�����ӵ�Ӳ���ӿ�
LED0=0; //����LED
while(1)
{
t=KEY_Scan(0); //�õ���ֵ
switch(t)
{
case KEY0_PRES:
LED0=!LED0;
break;
case KEY1_PRES:
LED1=!LED1;
break;
case WKUP_PRES:
LED0=!LED0;
LED1=!LED1;
break;
default:
delay_ms(10);
} 
} }
