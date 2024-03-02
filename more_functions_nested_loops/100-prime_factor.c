#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 2;

	long int n = 612852475143;
	long int max = 0;

	while (n != 1)
	{
		if (n % i == 0)
		{
			n = n / i;

			if (i > max)
				max = i;

		}

		i++;
	}

	printf("%ld\n", max);

	return (0);
}
