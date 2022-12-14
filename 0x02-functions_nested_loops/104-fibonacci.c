#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long fib1, fib2, fibNext, half1, half2;
	unsigned long f1_h1, f1_h2, f2_h1, f2_h2;

	fib1 = 0;
	fib2 = 1;

	for (i = 0; i < 98; i++)
	{
		fibNext = fib1 + fib2;
		printf("%lu, ", fibNext);
		fib1 = fib2;
		fib2 = fibNext;
	}
	f1_h1 = fib1 / 10000000000;
	f1_h2 = fib1 % 10000000000;
	f2_h1 = fib2 / 10000000000;
	f2_h2 = fib2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		half1 = f1_h1 + f2_h1;
		half2 = f1_h2 + f2_h2;
		if (f1_h2 + f2_h2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");
		f1_h1 = f2_h1;
		f1_h2 = f2_h2;
		f2_h1 = half1;
		f2_h2 = half2;
	}
	printf("\n");
	return (0);
}
