#include "main.h"

/**
 * rot13 - Function that encodes a string into rot13
 * @c: string to encode
 * Return: address of c
 */
char *rot13(char *c)
{
	int i = 0, j = 0;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(c + i))
	{
		while (j < 5)
		{
			if (a[j] == *(c + i))
			{
				*(c + i) = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}
