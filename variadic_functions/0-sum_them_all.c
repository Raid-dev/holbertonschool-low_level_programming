#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 *
 * Description: Returns the sum of  all its parameters starting from n
 * @n: The fixed argument
 *
 * Return: 0 if n is 0, the sum of all its parameters otherwise.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	if (n == 0)
		return (0);

	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
