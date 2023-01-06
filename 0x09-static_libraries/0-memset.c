#include "main.h"

/**
 * _memset - A function that fills memory with constant bytes
 * @s: memory area to fill
 * @b: char to fill memory with
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr_s = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (ptr_s);
}
