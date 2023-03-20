#include "main.h"

/**
 * add - Function that returns sum of two number
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: Sum of the integers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Function that returns difference of two number
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: differnce of the integers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Function that returns product of two number
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: product of the integers
 */
int mul(int a, int b)
{
	return(a * b);
}

/**
 * div - Function that returns quotient of two number
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: Quotient of the integers
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
 * mod - Function that returns remainder of two number
 * @a: first integer parameter
 * @b: second integer parameter
 * Return: remainder of the integers
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
