#include "main.h"

/**
 * print_alphabet - Print the alphabets in lower case and a new line
 * Return: Nothing
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
