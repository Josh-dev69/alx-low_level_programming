#include "main.h"

/**
 * print_last_digit - Print the last digit of an integer
 * @a: input character
 * Return: The last digit of the input character
 */

int print_last_digit(int a)
{
	int last;

	if (a < 0)
		last = (a % 10) * -1;
	else
		last = a % 10;

	_putchar((last % 10) + '0');
	return (last % 10);
}
