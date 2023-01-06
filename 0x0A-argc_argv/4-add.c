#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(SUCCESS)
 */
int main(int argc, char **argv)
{
	int i, sum = 0, num;

	if (argc == 1)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num > 0)
				sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
