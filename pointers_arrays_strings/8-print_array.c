#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 * Description: Prints n elements of the pointer integer array a
 * @a: The input pointer
 * @n: The input number
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));

		if (i != n - 1)
			printf(", ");
		else
			_putchar('\n');
	}
}
