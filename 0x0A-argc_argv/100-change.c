#include <stdio.h>
#include <stdlib.h>

/**
 * main - A  program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(SUCCESS)
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		if (cents % 25 >= 0)
		{
			coins = coins + (cents / 25);
			cents = cents % 25;
		}
		if (cents % 10 >= 0)
		{
			coins = coins + (cents / 10);
			cents = cents % 10;
		}
		if (cents % 5 >= 0)
		{
			coins = coins + (cents / 5);
			cents = cents % 5;
		}
		if (cents % 2 >= 0)
		{
			coins = coins + (cents / 2);
			cents = cents % 2;
		}
		if (cents % 1 >= 0)
			coins = coins + cents;
		printf("%d\n", coins);
		return (0);
	}
}
