#include "main.h"

/**
 * _abs - Prints absolute value of an integer
 * @a : input character
 * Return:Absolute value of a
 */ 

int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
