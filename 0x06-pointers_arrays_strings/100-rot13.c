#include "main.h"

/**
 * rot13 - Function that encodes a string into rot13
 * @c: string to encode
 * Return: address of c
 */
char *rot13(char *c)
{
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; (c[j] >= 'a' && c[j] <= 'z') ||
			       (c[j] >= 'A' && c[j] <= 'Z'); j++)
		{
			if ((c[j] >= 'a' && c[j] <= 'm') ||
					(c[j] >= 'A' && c[j] <= 'M'))
				c[j] += 13;
			else
				c[j] -= 13;
		}
	}
	return (c);
}
