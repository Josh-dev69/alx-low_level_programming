#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: size of each elements in bytes
 * Return: pointer to the first byte of the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = calloc(nmemb, size);
	if (res == NULL)
		return (NULL);
	return (res);
}
