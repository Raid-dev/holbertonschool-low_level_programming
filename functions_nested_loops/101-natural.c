#include <stdio.h>

/**
 * sum_multiples - Prints sum of multiples
 *
 *
 * Return: Sum
 */

int main(void)
{
	int i = 1;
	int sum = 0;

	while (i <= 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
		
		i++;
	}

	_putchar(sum / 100000);
	_putchar(sum / 10000);
	_putchar(sum / 1000);
	_putchar(sum / 100);
	_putchar(sum / 10);
	_putchar(sum % 10 + '0');

	_putchar('\n');

	return (0);
}
