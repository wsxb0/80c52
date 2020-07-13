#include <reg52.h>

 sbit LED1 = P1^0;
 sbit LED3 = P1^2;
 sbit LED5 = P1^4;
 sbit LED7 = P1^7;
main(void)
{
	LED1 = 0;
	LED3 = 0;
	LED5 = 0;
	LED7 = 0;
}