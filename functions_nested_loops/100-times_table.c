#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The input number
 *
 * Return: Table
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				if (i * j < 10)
				{
					_putchar(i * j + '0');
				}
				else if (i * j >= 100)
				{
					_putchar(i * j / 100);
					_putchar(i * j / 10);
					_putchar(i * j % 10 + '0');
				}
				else
				{
					_putchar(i * j / 10);
					_putchar(i * j % 10 + '0');
				}

				if (j != n - 1)
				{
					_putchar(',');
                        		_putchar(' ');

					if (i * (j + 1) < 10)
					{
						_putchar(' ');
					}
				}
			}
		}
	}
}
