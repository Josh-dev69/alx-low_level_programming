#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 *  * print_all - function that prints anything, followed by a new line
 *   * @format: variable number of argument
 *    */
void print_all(const char * const format, ...)
{
	va_list li_args;
	unsigned int i = 0;
	char *str;

	va_start(li_args, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(li_args, int));
				break;
			case 'i':
				printf("%d", va_arg(li_args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(li_args, double));
				break;
			case 's':
				str = va_arg(li_args, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(li_args);
	printf("\n");
}
