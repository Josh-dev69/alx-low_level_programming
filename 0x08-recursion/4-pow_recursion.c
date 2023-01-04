#include "main.h"

/**
 * _pow_recursion - A recursion function that calculates the value of x
 * raised to the value of y
 * @x: integer parameter
 * @y: integer parameter
 * Return: on err, return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x = x * _pow_recursion(x, y - 1));
}
