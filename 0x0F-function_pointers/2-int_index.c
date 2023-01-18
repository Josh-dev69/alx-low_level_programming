#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array pointer
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	if (i == size)
		return (-1);
	return (-1);
}
