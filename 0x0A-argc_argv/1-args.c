#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(SUCCESS)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
