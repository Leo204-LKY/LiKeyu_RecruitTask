#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int xms)		//@12.000MHz, Delay [xms] ms，定时器溢出中断
{
	unsigned char i, j;
  while(xms)
  {
	  i = 2;
	  j = 239;
	  do
	  {
	  	while (--j);
	  } while (--i);
    xms--;
  }
}

void main()
{
	EA = 1;  // 允许中断
	EX1 = 1; // 允许外部中断 1 中断
	IT1 = 1; // 下降沿触发，P3_3 引脚电平下降时(即按下 K4 按键过程中)触发中断
	while(1)
	{
		P2_0 = 1;
	}
}

void Flash() interrupt 0 // 中断服务程序，中断号 0
{
	int i;
	for(i=0;i<3;i++)
	{
		P2_0 = 1;
		Delay(500);
		P2_0 = 0;
		Delay(500);
	}
}