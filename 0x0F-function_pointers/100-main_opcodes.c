#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print opcode of the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[i]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;
	i = 0;
	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hhx ", func_ptr[i++]);
		printf("%hhx\n", func_ptr[i]);
	}
	return (0);
}
