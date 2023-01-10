#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t len_s1, len_s2;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	new_str = malloc(len_s1 + len_s2 + 1);
	if (new_str)
	{
		strcpy(new_str, s1);
		strcat(new_str, s2);
	}
	else
	{
		return (NULL);
	}
	return (new_str);
}
