#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that sums two diagonals of square matrix integers
 * @a: array input
 * @size: size of array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, max;

	sum1 = 0;
	sum2 = 0;
	max = size * size;
	i = 0;
	for (; i < max; i += size + 1)
		sum1 = sum1 + a[i];
	for (i = size - 1; i < max - 1; i += size - 1)
		sum2 = sum2 + a[i];
	printf("%d, %d\n", sum1, sum2);
}
