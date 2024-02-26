#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: Draws a straight line of length n
 * @n: The input length
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
