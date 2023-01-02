#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: pointer to input string
 * @accept: pointer to string containing characters to match
 * Return: pointer to s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
