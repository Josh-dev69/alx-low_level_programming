#include "main.h"

/**
 * factorial - A recursion function that calculates factorial of n
 * @n: integer parameter
 * Return: on err, return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
