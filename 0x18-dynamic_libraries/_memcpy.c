#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr_dest);
}
