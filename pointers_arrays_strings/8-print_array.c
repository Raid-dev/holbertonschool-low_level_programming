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
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", *(a + i));

			if (i == n - 1)
				printf("\n");
			else
				printf(", ");
		}
	}
	else
		printf("\n");
}
