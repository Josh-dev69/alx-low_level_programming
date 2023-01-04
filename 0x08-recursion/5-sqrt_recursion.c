#include "main.h"
int check_sqrt(int a, int b);

/**
 * check_sqrt - functon that checks square root
 * @a: integer value
 * @b: integer value
 * Return: the square root
 */
int check_sqrt(int a, int b)
{
	if (a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	return (check_sqrt(a + 1, b));
}

/**
 * _sqrt_recursion - A functions that returns the value of square
 * root of n.
 * @n: integer parameter
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt(1, n));
}
