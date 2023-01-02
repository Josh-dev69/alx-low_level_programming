#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: pointer to input string
 * @accept: pointer to string containing characters to match
 * Return: pointer to s
 */

unsigned int _strspn(char *s, char *accept)
{
	int count, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
