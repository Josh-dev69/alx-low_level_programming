#include "main.h"

/**
 * string_toupper - Function that changes all lowercase to uppercase
 * @c: input character
 * Return: char
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 'a' + 'A';
		}
	}
	return (c);
}
