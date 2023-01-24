#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: Character parameter for output formatting/separator
 * @n: number of arguments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
