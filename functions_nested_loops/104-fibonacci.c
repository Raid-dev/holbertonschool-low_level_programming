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
	printf("1");

	temp = 35301852344706746049;

	printf("%ld", temp);

	printf("\n");

	return (0);
}
