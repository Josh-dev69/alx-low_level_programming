#include "main.h"

/**
 * set_string - function that set value of a pointer to char
 * @s: double pointer to a string
 * @to: pointer to string to set s to
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
