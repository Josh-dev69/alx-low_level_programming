#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct function to
 * perform the operation asked by the user.
 * @s: input character pointer
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 1;
	
	while (i <= 5)
	{
		if (*(ops[i]).op == *s && ops[i].op != NULL)
			return (ops[i].f);
	}
	return (NULL);
}
