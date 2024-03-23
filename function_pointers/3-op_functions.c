#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - Adds parameters
 *
 * Description: Adds the parameters a and b
 * @a: The first parameter
 * @b: The second parameter
 *
 * Return: Sum of parameters.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts parameters
 *
 * Description: Subtracts the parameters a and b
 * @a: The first parameter
 * @b: The second parameter
 *
 * Return: Subtraction of parameters.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies parameters
 *
 * Description: Multiplies the parameters a and b
 * @a: The first parameter
 * @b: The second parameter
 *
 * Return: Multiplication of parameters.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides parameters
 *
 * Description: Divides the parameters a and b
 * @a: The first parameter
 * @b: The second parameter
 *
 * Return: Division of parameters.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates modulo of parameters
 *
 * Description: Calculates modulo of the parameters a and b
 * @a: The first parameter
 * @b: The second parameter
 *
 * Return: Modulo of parameters.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
