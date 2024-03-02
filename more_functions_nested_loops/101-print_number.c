#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: Prints the integer n
 * @n: The input integer
 */

void print_number(int n)
{
	unsigned int temp = 1;

	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}

	do {
		if (n < 10)
		{
			_putchar(n + '0');
			break;
		}

		temp = temp * 10 + n % 10;

		n /= 10;
	} while (n != 0);

	do {
		if (temp < 10)
			break;

		_putchar(temp % 10 + '0');

		temp /= 10;
	} while (temp != 0);
}
