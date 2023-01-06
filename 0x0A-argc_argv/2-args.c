#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(SUCCESS)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
