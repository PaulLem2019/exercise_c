// Программа проверки числа на совершенность
// Совершенное число - натуральное число, равное сумме всех своих собстаенных делителей (положительных делителей отличных от самого числа
// задача сделана для формирования открытого портфолио
// 10 августа 2019

#include <stdio.h>

int main ()
{
	int val, sum;
	double prom1, prom2;
	int i;
	printf ("enter value\n");
	scanf ("%d", &val);
	sum = 0;
	for (i=val; i>1; i--)
	{
		prom1 = (double) (val)/(double)(i);
		prom2 = (int) (val/i);
		if (prom1 == prom2)
		{
			sum += prom2;
			printf ("prom1=%lf, prom2=%lf\n", prom1, prom2);
		}
	}
	if (sum == val)
	{
		printf ("perfect value! %d\n", val);
	}
	else
	{
		printf ("it's not perfect value %d sum %d\n", val, sum);
	}
}
			
