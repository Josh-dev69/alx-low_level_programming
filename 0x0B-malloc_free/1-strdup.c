#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function that returns pointer to newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: String parameter to copy
 * Return: Pointer to new string
 */
char *_strdup(char *str)
{
	size_t length;
	char *newstr;

	if (str == NULL)
		return (NULL);
	length = strlen(str);
	newstr = malloc(length + 1);
	if (newstr != NULL)
	{
		strncpy(newstr, str, length + 1);
		return (newstr);
	}
	else
	{
		return (NULL);
	}
}
