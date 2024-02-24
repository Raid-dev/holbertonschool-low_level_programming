#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 9, followed by a new line
 * @n: The input number
 *
 * Return: Numbers
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}

	printf("%d\n", n);
}
