#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: Prints a triangle of size size
 * @size: The input size
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < i - 1; j++)
				_putchar(' ');

			for (j = 0; j < i; j++)
				_putchar('#');

			_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
