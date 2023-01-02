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
	char *startn = needle, *starth = haystack;

	for (; *haystack; haystack++)
	{
		starth = haystack;
		needle = startn;
		for (; *haystack == *needle; haystack++, needle++)
		{
			if (*needle == '\0')
				return (starth);
		}
		haystack = starth;
	}
	return (NULL);
}
