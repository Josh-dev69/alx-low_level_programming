#include "main.h"

/**
 * leet - Function that encodes a string into 1337.
 * @c: an input string to encode
 * Return: An encode string
 */
char *leet(char *c)
{
	int i, j;
	char sub1[] = {'a', 'A', '4', 'e', 'E', '3', 'o', 'O', '0',
	     't', 'T', '7', 'l', 'L', '1'};

	i = 0;
	while (c[i] != '\0')
	{
		for (j = 0; sub1[j] != '\0'; j += 3)
		{
			if (c[i] == sub1[j] || c[i] == sub1[j + 1])
				c[i] = sub1[j + 2];
		}
		i++;
	}
	return (c);
}
