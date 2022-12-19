#include "main.h"

/**
 * puts2 - Functions that print the other character of a string,
 * Starting with the first character.
 * @str: String parameter
 * Return: Nothing
 */

void puts2(char *str)
{
	/* Variable declaration */
	int i, len = 0;

	/* Loop to calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Loop to print the character starting first character */
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
