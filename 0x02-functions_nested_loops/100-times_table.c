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
			_putchar('0');
			for (j = 0; j <= n; j++)
			{
				_putcar(',');
				_putchar(' ');

				res = i * j;

				if (res <= 99)
					_putchar(' ');
				if (res <= 9)
					_putchar(' ');
				if (res >= 100)
				{
					_putchar('0' + (res / 100));
					_putchar('0' + ((res / 10) % 10));
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
