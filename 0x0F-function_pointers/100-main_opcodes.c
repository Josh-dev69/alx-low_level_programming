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
	int bytes, i = 0;
	char *func_ptr;

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
	
	func_ptr = (char *)main;
	
	while (i < bytes)
	{
		printf("%02x ", func_ptr[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
