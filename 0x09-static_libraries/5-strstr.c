#include "main.h"
#include <stdio.h>

/**
 * _strstr - A function that locates a substring
 * @haystack: Input String
 * @needle: Input String
 * Return: pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle;
	char *starth = haystack;

	while (*haystack != '\0')
	{
		starth = haystack;
		needle = startn;
		while ((*haystack != '\0') == (*needle != '\0'))
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
