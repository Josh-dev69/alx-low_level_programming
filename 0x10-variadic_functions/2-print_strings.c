#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: input for string separtor
 * @n: number of arguments
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list list;

	va_start(list, n);
	while (i < n)
	{
		str = va_arg(list, char*);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator == NULL)
			continue;
		if (i > n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
