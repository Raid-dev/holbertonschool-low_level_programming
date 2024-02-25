#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i = 1;
	long int j = 2;
	long int sum = 2;

	int temp;

	while (temp <= 4000000)
	{
		temp = i + j;

		if (temp % 2 == 0)
			sum += temp;

		i = j;

		j = temp;
	}

	printf("%ld\n", sum);

	return (0);
}
