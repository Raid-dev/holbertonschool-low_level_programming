#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - Entry point
 *
 * Description: Prints the integer n
 * @n: The input integer
 */

void print_number(int n)
{
	char buffer[20];

	int i;

	int length = sprintf(buffer, "%d", n);

	for (i = 0; i < length; i++)
	{
		_putchar(buffer[i]);
	}
}
