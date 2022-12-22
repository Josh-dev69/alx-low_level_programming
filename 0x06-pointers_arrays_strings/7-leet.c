#include "main.h"

/**
 * leet - Function that encodes a string into 1337.
 * @c: an input string to encode
 * Return: An encode string
 */
char *leet(char *c)
{
	int i, j;
	char sub1[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char sub2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	j = 0;
	while (c[i])
	{
		for (; j < 10; j++)
		{
			if (c[i] == sub1[j])
				c[i] = sub2[j];
		}
		i++;
	}
	return (c);
}
