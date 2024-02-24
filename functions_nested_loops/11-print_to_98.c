#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 9, followed by a new line
 * @n: The input number
 *
 * Return: Numbers
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		int i = 0;

		while (i <= n - 98)
		{
			int z = 98 + i;

			_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
			
			if (z == n)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}

			i++;
		}
	}
	else
	{
		int i = 0;
		
                while (i <= 98 - n)
                {
                        int z = n + i;

                        _putchar(z / 10 + '0');
                        _putchar(z % 10 + '0');
			
			if (z == 98)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}

                        i++;
                }
	}
}
