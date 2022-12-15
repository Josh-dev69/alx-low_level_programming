#include "main.h"
#include <stdlib.h>

/**
 * positive_or_negative - Check if inter is positive or negative
 * @n: Integer value
 * Return: Nothing

void positive_or_negative(int n)
{
	n = rand() - RAND_MAX / 2;

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
