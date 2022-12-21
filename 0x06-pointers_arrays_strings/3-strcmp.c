#include "main.h"

/**
 * _strcmp- Function that compares two strings
 * @s1: First String
 * @s2: Second String
 * Return: 0 if equal, otherwise signed integers
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
