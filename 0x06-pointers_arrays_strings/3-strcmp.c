#include "main.h"

/**
 * _strcmp- Function that compares two strings
 * @s1: First String
 * @s2: Second String
 * Return: An integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
		}
	}
	return (diff);
}
