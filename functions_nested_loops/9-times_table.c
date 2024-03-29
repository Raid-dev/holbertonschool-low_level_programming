#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: Table
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * j < 10)
			{
				_putchar(i * j + '0');
			}
			else
			{
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');

				if ((i) * (j + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}
