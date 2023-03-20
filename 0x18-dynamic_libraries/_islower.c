#include "main.h"

/**
 * _islower - a function that returns a value
 * @c: An argument or input character of the function
 * Return: 1 if lowercase is true, otherwis 0
 */

int _islower(int c)
{
	char alpha;
	int lower = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
