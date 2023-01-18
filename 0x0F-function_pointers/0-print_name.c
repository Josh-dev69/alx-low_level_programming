#include "function_pointers.h"

/**
 * print_name - Function to print a name
 * @name: pointer to the name to be printed
 * @f: function pointer to the name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
