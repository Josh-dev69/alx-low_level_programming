#include "main.h"

/**
 * rot13 - Function that encodes a string into rot13
 * @c: string to encode
 * Return: address of c
 */
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (i = 0; (c[i] >= 'a' && c[i] <= 'z') ||
			       (c[i] >= 'A' && c[i] <= 'Z'); i++)
		{
			if ((c[i] >= 'a' && c[i] <= 'm') ||
					(c[i] >= 'A' && c[i] <= 'M'))
				c[i] = c[i] + 13;
			else
				c[i] = c[i] - 13;
		}
	}
	return (c);
}
