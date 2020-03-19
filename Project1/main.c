#include<stdio.h>
#include<conio.h>
int main22()
{
	int ac = 0, d = 0, n, i,m,x=0,q,rem=0;
	prinf("enter the number of bits required for calculation:");
	scanf("%d",&n);
	printf("enter the multlipicant and multiplier:");
	scanf("%d%d", &m, &q);
	if(m>0 && q>0)
	while (m != 0)
	{
		rem = m % 2;
		m = m / 2;
		x = rem + x * 10;//x is a binary value of multiplicant m
	}
	while (q != 0)
	{
		rem = m % 2;
		q = q / 2;
		y = rem + y * 10;//x is a binary value of multiplier q
	}
	for (i = 0; i < n; i++)
	{

	}
}