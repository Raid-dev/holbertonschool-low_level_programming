#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - Entry point
 *
 * Description: Prints the integer n
 * @n: The input integer
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	char buffer[20];
	int index = 0;

	while (n > 0)
	{
		buffer[index++] = '0' + (n % 10);
		n /= 10;
	}

	int i;

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
}
