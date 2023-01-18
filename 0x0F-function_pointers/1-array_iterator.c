#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: array pointer
 * @size: size of the array
 * @action: function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
