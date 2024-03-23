#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 *
 * Description: Selects the correct function to perform the operation s
 * @s: The operation to be performed
 *
 * Return: A pointer to function.
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

	int i;

	i = 0;

	while (i < 5)
	{
		if (ops[i][0] == s)
			return (ops[i]1);
		i++;
	}

	return (NULL);
}
