#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: Prints the integer n
 * @n: The input integer
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor = 1;
	int temp = n;

	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
