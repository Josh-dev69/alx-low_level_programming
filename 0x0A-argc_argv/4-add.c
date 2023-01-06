#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(SUCCESS)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, num, j;
	char *arg;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j]; j++)
		{
			if (!(isdigit(arg[j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
