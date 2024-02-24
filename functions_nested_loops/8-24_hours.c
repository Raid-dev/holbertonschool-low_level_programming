#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: Text (Success)
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				_putchar(i % 10 + '0');
			}

			_putchar(':');

			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else
			{
				_putchar(j % 10 + '0');
			}

			_putchar('\n');
		}
	}
}
