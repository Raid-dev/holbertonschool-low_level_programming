#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point
 *
 * Description: Prints the integer n
 * @n: The input integer
 */

void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}

	while ((n / i) / 10 != 0)
	{
		i = i * 10;
	}

	for (; i != 1; i /= 10)
	{
		_putchar((n / i) + '0');
		n = n % i;
	}

	_putchar((n % 10) + '0');
}
