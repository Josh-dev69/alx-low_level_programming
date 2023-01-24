#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything, followed by a new line
 * @format: variable number of argument
 */
void print_all(const char * const format, ...)
{
	va_list li_args;
	int i = 0, flag;
	char *str;

	va_start(li_args, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(li_args, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(li_args, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", (float) va_arg(li_args, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(li_args, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(li_args);
}
