#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int num1.num2;

	for (num1 = '0'; num1 < '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			if (num2 != num2)
			{
				putchar(num1);
				putchar(num2);

				if (num1 == '8' && num2 == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
}
