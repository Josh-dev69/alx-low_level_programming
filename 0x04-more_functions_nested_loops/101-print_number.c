#include "main.h"

/**
 * print_number - Prints an integer
 * @n: input integer
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int a, i, j;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	i = a;
	j = 1;

	while(i > 9)
	{
		i = i / 10;
		j = j * 10;
	}

	for(; j >= 1; j = j / 10)
	{
		_putchar(((a / j) % 10) + '0');
	}
}
