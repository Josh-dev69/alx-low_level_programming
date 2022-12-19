#include "main.h"

/**
 * *_strcpy - Function that copies string pointed to by src including
 * the terminating null byte (\0) to the buffer pointed to by dest.
 * @dest: pointer to the destination of the string
 * @src: pointer to the string source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *str = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (str);
}
