#include "main.h"

/**
 * _strncpy- Function that copies string with n bytes
 * @dest: Destination String
 * @src: Source String
 * @n: Number of character to be copied
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
