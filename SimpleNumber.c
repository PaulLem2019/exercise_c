// программа поиска простого число
// простое число - натуральное число, имеющее только два делителя: единицу и самого себя
// 09 августа 2019

#include <stdio.h>

int main ()
{
	int val, sum;
	double prom1, prom2;
	int i;
	printf ("enter value\n");
	scanf ("%d", &val);
	sum = 0;
	for (i=2; i<val; i++)
	{
		prom1 = (double) (val)/(double)(i);
		prom2 = (int) (val/i);
		if (prom1 == prom2)
		{
			sum = 1;
			break;
		}
	}
	if (sum)
	{
		printf ("value is not simple %d\n", val);
	}
	else
	{
		printf ("it's simple value %d sum %d\n", val, sum);
	}
}
			
