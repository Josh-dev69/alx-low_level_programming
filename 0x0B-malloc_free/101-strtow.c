#include "main.h"
#include <stdlib.h>

/**
 * strtow - A function that splits a string into words
 * @str: String Input
 * Return: NULL if it str is NULL
 */
char **strtow(char *str)
{
	char **array;
	int i, j, k, count;

	k = 0;
	i = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	count = countWords(str);
	if (count == 0)
		return (NULL);
	array = (char **)malloc((sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; str[i];)
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			j = i + 1;
			while (str[j] != ' ' && str[j] != '\t' && str[j] != '\0')
				j++;
			array[k] = malloc((j - i + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(array[j]);
				free(array);
				return (NULL);
			}
			for (int m = 0; m < j - i; m++)
				array[k][m] = str[i + m];
			array[k][j - i] = '\0';
			k++;
			i = j;
		}
		else
			i++;
	}
	array[k] = NULL;
	return (array);
}

/**
 * countWords - function to counts the number of words in a string
 * @str: Input Character pointer
 * Return: the value of the count
 */
int countWords(char *str)
{
	int i, count;

	i = 0;
	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
			if ((str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
				count++;
	}
	return (count);
}
