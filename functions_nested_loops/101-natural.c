#include "main.h"
#include <stdlib.h>

/**
 * sum_multiples - Prints sum of multiples
 *
 *
 * Return: Sum
 */

int sum_multiples(void)
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

	printf(sum);

	_putchar('\n');
}
