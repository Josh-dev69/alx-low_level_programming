#include "main.h"
#include <stdlib.h>

/**
 * strtow - A function that splits a string into words
 * @str: An input pointer of the string to split
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char **strtow(char *str)
{
	char **array;
	int i = 0, j, k = 0, len = 0, count = 0;
	
	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
			if ((str[i + 1] == ' '
			|| str[i + 1] == '\t' || str[i + 1] == '\0'))
				count++;
	}
	if (count == 0)
		return (NULL);
	array = malloc((count + 1) * sizeof(char*));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i];)
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			j = i + 1;
			while (str[j] != ' ' && str[j] != '\t' && str[j] != '\0')
				j++;
			len = j - i;
			array[k] = malloc((len + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(array[j]);
				free(array);
				return (NULL);
			}
			memcpy(array[k], &str[i], len);
			array[k][len] = '\0';
			k++;
			i = j;
		}
		else
			i++;
	}
	array[k] = NULL;
	return (array);
}
