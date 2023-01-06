#include "main.h"

/**
 * _isalpha - Print one if input is an alphabet
 * @c: Input character
 * Return: 1 if input is an alphabet, otherwise 0
 */

int _isalpha(int c)
{
	char lower, upper;
	int isChar = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			if (c == lower || c == upper)
				isChar = 1;
		}
	}
	return (isChar);
}
