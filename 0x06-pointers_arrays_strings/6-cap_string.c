#include "main.h"

/**
 * cap_string - Function that capitalise all words of a string
 * @c: input character
 * Return: char
 */

char *cap_string(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		while (!(c[i] >= 'a' && c[i] <= 'z'))
		{
			i++;
		}
		if (c[i - 1] == ' ' || c[i - 1] == '\t' ||
				c[i - 1] == '\n' ||
				c[i - 1] == ',' ||
				c[i - 1] == ';' ||
				c[i - 1] == '.' ||
				c[i - 1] == '!' ||
				c[i - 1] == '?' ||
				c[i - 1] == '"' ||
				c[i - 1] == '(' ||
				c[i - 1] == ')' ||
				c[i - 1] == '{' ||
				c[i - 1] == '}' || i == 0)
			c[i] = c[i] - 'a' + 'A';
		i++;
	}
	return (c);
}
