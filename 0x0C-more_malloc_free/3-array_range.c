#include "main.h"

/**
 * array_range - Function that create an array of integers
 * @min: Minimum integer value
 * @max: Maximum integer value
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
