#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Prints the last digit of the number n
 * @n: The input number
 *
 * Return: Always int (Success)
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = abs(n);
	}

	_putchar(n + '0');

	return (n);
}
