#include "main.h"
/**
 * _strncat - Function that concatenates two strings with n bytes
 * @dest: Destination String
 * @src: Source String
 * @n: Number of character to be copied
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
