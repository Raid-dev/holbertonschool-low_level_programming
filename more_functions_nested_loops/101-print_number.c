#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: Prints the integer n
 * @n: The input integer
 */

void print_number(int n)
{
	if (n < 0)
	{
        	_putchar('-');
        	n = -n;
    	}

	int i = n;

	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar(i % 10 + '0');
}
