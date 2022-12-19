#include "main.h"

/**
 * _atoi - Function that convert a string to an integer
 * @s: The pointer to convert
 * Return: An integer
 */

int _atoi(char *s)
{
	int i = 0, min = 1, b = 0;
	unsigned int ni = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min = min * -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			b = 1;
			ni = (ni * 10) + (s[i] - '0');
			i++;
		}
		if (b == 1)
		{
			break;
		}
		i++;
	}
	ni = ni * min;
	return (ni);
}
