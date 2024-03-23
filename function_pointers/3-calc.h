#ifndef CALC_H
#define CALC_H

#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - Adds parameters
 *
 * op_sub - Subtracts parameters
 *
 * op_mul - Multiplies parameters
 *
 * op_div - Divides parameters
 *
 * op_mod - Calculates remainder of the division of parameters
 *
 * @a: The first parameter
 * @b: The second parameter
 *
 * Return: The result.
 */

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
