#include <stdarg.h>
#include "variadic_functions.h"

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
	if (separator == NULL)
		separator = "";

	for (; i < n; i++)
	{
		str = va_arg(list, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
