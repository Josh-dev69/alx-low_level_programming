#include "main.h"

/**
 * puts_half - Functions that print half of a string
 * @str: String Parameter
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, n, len = 0;
	/* Loop to check the length of the string */
	while (str[len] != '\0')
		len++;
	/* condition that determine the start of the printing */
	if ((len + 1) % 2 != 0)
		n = (len - 1) / 2;
	else
		n = (len / 2);
	n++;
	/* Loop for Printing the half */
	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
