#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything, followed by a new line
 * @format: variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list li_args;
	unsigned int i = 0;
	char *separator = "";

	va_start(li_args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(li_args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(li_args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(li_args, double));
				break;
			case 's':
				{
					char *str = va_arg(li_args, char*);
					if (str == NULL)
						printf("%s(nil)", separator);
					else
						printf("%s%s", separator, str);
					break;
				}
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(li_args);
	printf("\n");
}
