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
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		indxex = 0;
		if (haystack[index] == needle[index])
		{
			do
			{
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			}while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return (NULL);
}
