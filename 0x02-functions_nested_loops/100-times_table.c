#include "main.h"

/**
 *  print_times_table - Print the times table to the range of the input character
 *  @n: input character
 *  Return: Nothing
 */

void print_times_table(int n)
{
	int i, j, res;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;

				if ((res / 10) == 0)
				{
					if (j != 0)
						_putchar(' ');
					_putchar(res + '0');

					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');

					if (j == n)
						continue;
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
