#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Number of bytes to be allocated
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
