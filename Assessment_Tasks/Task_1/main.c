#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int xms)		//@12.000MHz, Delay [xms] ms����ʱ������ж�
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
	EA = 1;  // �����ж�
	EX0 = 1; // �����ⲿ�ж�
	IT0 = 1; // �½��ش�����P3_2 ���ŵ�ƽ�½�ʱ(������ K3 ����������)�����ж�
	while(1)
	{
		P2_0 = 1;
	}
}

void Flash() interrupt 0 // �жϷ�������жϺ� 0
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