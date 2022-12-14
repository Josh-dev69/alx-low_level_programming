#include <stdio.h>

/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	int count, f1, f2, fib;

	f1 = 1;
	f2 = 2;

	printf("%d, %d, ", f1, f2);

	for (count = 2; count < 50; count++)
	{
		fib = f1 + f2;
		printf("%d, ", fib);
		f1 = f2;
		f2 = f;
	}
	printf("\n");
	return (0);
}
