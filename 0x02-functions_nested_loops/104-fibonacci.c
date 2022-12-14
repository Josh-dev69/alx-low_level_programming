#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned int fib1, fib2, fibNext;

	fib1 = 1;
	fib2 = 2;

	printf("%u, %u, ", fib1, fib2);
	for (i = 2; i < 98; i++)
	{
		fibNext = fib1 + fib2;
		printf("%u, ", fibNext);
		fib1 = fib2;
		fib2 = fibNext;
	}
	printf("\n");
	return (0);
}
