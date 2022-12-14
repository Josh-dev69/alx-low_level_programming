#include <stdio.h>

/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	int i;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	printf("%ld, %ld, ", fib[0], fib[1]);

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%ld, ", fib[i]);
		fib[0] = fib[1];
		fib[1] = fib[i];
	}
	printf("\n");
	return (0);
}
