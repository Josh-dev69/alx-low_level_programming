#include "main.h"

/**
 * rev_string - A function that reverse a string
 * @s: String parameter
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len, i;
	char rev_str;

	/* Loop to check the length of the string */
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	/* Loop to swap and reverse the string */
	for (i = 0; i < len / 2; i++)
	{
		rev_str = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = rev_str;
	}
}
