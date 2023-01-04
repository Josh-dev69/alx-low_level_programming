#include "main.h"
int check_prime(int a, int b);

/**
 * check_prime - check if num is divisible
 * @num: the number to be checked
 * @div: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int check_prime(int num, int div)
{
	if (div == (num / 2))
		return (1);
	else if (num % div == 0)
		return (0);
	return (check_prime(num, div + 1));
}

/**
 * is_prime_number - A functions that returns only prime numbers
 * @n: integer parameter
 * Return: an integer prime
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (check_prime(n, div));
}
