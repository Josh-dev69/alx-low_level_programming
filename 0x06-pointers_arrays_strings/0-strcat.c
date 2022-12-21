#include "main.h"
/**
 * _strcat - Function that concatenates two strings
 * @dest: First string parameter(Destination)
 * @src: Second string parameter(Source)
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
