#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 *
 * Description: Prints n numbers by separating with separator
 * @separator: The separator between numbers
 * @n: The number of integers
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));

		if (i != n - 1 && separator != NULL)
			printf(separator);
	}

	va_end(args);

	putchar('\n');
}
