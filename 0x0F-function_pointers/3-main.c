#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - main Entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(SUCCESS)
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
