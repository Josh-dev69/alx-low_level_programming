#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Function that adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, sum = 0, buf1, buf2, op, bg;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i >= j)
		bg = i;
	else
		bg = j;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	i--, j--, size_r--;
	buf1 = *(n1 + i) - 48, buf2 = *(n2 + j) - 48;
	while (bg >= 0)
	{
		op = buf1 + buf2 + sum;
		if (op >= 10)
			sum = op / 10;
		else
			sum = 0;
		if (op > 0)
			*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (i > 0)
			i--, buf1 = *(n1 + i) - 48;
		else
			buf1 = 0;
		if (j > 0)
			j--, buf2 = *(n2 + j) - 48;
		else
			buf2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

