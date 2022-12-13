#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: input character
 * Return: 1 if positive, -1 if negative, otherwise 0
 */

int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		_putchar('+');
		num = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		num = -1;
	}
	else
	{
		_putchar('0');
		num = 0;
	}
	return (num);
}
