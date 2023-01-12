#include "main.h"
#include <errno.h>

/**
 * main - Entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = strtol(argv[1], NULL, 10);
	if (num1 == 0 && errno)
	{
		printf("Error\n");
		exit(98);
	}
	num2 = strtol(argv[2], NULL, 10);
	if (num2 == 0 && errno)
	{
		printf("Error\n");
		exit(98);
	}
	mul = num1 * num2;
	printf("%ld\n", mul);
	return (0);
}
