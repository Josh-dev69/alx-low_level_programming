#include "main.h"

/**
  * print_number - Function to print integer value
  * @n: Integer parameter
  * Return: Nothing
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
