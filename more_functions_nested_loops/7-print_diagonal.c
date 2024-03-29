#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: Draws a diagonal line n times
 * @n: The input number
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
