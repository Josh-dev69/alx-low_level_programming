#include "main.h"

/**
 * swap_int - Function that swap the value of two integer parameter
 * @a: First integer parameter
 * @b: Second integer parameter
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
