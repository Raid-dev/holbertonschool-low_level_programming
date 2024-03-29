#include "main.h"

/**
 * print_sign - Prints the sign of the number n
 * @n: The input number
 *
 * Return: 1, 0 and -1 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}

	_putchar('-');

	return (-1);
}
