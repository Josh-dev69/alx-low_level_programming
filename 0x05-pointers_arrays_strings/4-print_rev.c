#include "main.h"

/**
 * print_rev - Function that print a string in reverse
 * @s: String Parameter
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i, len = 0;
	/* Determine the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}
	/* Loop to print each character in the string in a reverse order */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
