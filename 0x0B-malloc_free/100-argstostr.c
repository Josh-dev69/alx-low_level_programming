#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, T_len, len;
	char *str;

	T_len = 0;
	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			T_len++;
	}
	T_len += ac;
	str = malloc(sizeof(char) * T_len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[len] = av[i][n];
			len++;
		}
		if (str[len] == '\0')
		{
			str[len++] = '\n';
		}
	}
	return (str);
}
