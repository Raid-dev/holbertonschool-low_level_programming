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
	int k;
	int z;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (z = 0; z < 10; z++)
				{
					_putchar(i + '0');
					_putchar(j + '0');

					_putchar(':');

					_putchar(k + '0');
					_putchar(z + '0');

					_putchar('\n');
				}
			}
		}
	}
}
