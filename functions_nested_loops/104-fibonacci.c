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
	long int temp;

	int k = 0;

	printf("%ld, ", i);
	printf("%ld, ", j);

	while (k < 95)
	{
		temp = i + j;

		printf("%ld", temp);

		i = j;

		printf(", ");

		j = temp;

		k++;
	}

	temp = i + j;

	putchar(temp / 10000000000 + '0');
	printf("%ld", temp % 10000000000);

	printf("\n");

	return (0);
}
