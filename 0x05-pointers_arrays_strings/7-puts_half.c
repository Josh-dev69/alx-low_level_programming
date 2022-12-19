#include "main.h"

/**
 * puts_half - Functions that print half of a string
 * @str: String Parameter
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, start, len = 0;

	/* Loop to check the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}
	/* condition that determine the start of the printing */
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}
	/* Loop for Printing the half */
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
