#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: String parameter
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
