#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function to creates an array of chars, and
 * initializes it with a specific char.
 * @size: The size of the array
 * @c: Input Character
 * Return: Pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *)malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
