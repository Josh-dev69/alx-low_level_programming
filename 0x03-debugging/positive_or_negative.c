#include "main.h"
#include <stdlib.h>

/**
 * positive_or_negative - check if integer is positive or negative
 * @n: integer value
 * Return: Nothing
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
