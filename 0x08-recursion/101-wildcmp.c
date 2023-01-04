#include "main.h"

/**
 * wildcmp - function that compare two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * retrurn: 1 if string is identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1));
}
