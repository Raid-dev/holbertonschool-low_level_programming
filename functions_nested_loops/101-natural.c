#include "main.h"

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
		if (i % 3 || i % 5)
		{
			sum = sum + i;
		}

		i++;
	}

	return (sum);
}
