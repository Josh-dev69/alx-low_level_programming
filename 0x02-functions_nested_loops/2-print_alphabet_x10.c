#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times in with a new line
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int count;
	char alpha;

	for (count = 0; count < 10; count++)
	{
		for (alpha = 'a'; alpha = 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
