#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int i, sum;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;
	sum = 2;

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if ((fib[i] % 2 == 0) && (fib[i] < 4000000))
		{
			sum = sum + fib[i];
		}
	}
	printf("%d\n", sum);
	return (0);
}
