#include "main.h"

/**
 * reverse_array - Function that reverse an array
 * @a: the array
 * @n: the size of the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
