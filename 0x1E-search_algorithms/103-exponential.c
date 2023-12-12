#include "search_algos.h"

/**
 * bin_search - binary search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @left: The left index of the search range.
 * @right: The right index of the search range
 * @value: The value to search for.
 * Return: -1 to indicate that the value is not present in the array.
 */

int bin_search(int *array, int left, int right, int value)
{
	int mid, i;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d ", array[i]);
		printf("\n");
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - exponential search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t left, right, range = 1;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (range < size && array[range] <= value)
	{
		printf("Value checked array[%lu]: [%d]\n", range, array[range]);
		range *= 2;
	}
	left = range / 2;
	right = (range < size) ? range : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (bin_search(array, left, right, value));
}
