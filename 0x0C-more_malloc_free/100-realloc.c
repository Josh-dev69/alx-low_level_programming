#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory block
 * @old_size: Old memory size in byte
 * @new_size: new memory size in byte
 * Return: pointer to memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *p;

	if (ptr != NULL)
		p = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; (i < old_size || i < new_size); i++)
		*(new_ptr + i) = p[i];
	free(ptr);
	return (new_ptr);
}
