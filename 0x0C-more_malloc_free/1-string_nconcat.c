#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: First String parameter
 * @s2: Second String parameter
 * @n: number of bytes
 * Return: Pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, count;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	res = malloc((len1 + n + 1) * sizeof(char));
	if (res == NULL)
		return (0);
	for (count = 0; count < len1; count++)
		res[count] = s1[count];
	for (count = 0; count < n; count++)
		res[len1 + count] = s2[count];
	res[len1 + n] = '\0';
	return (res);
}
