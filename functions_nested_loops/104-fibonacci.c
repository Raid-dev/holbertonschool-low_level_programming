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
	putchar(1 + 2);
	putchar(1 + 2 + 2);

	temp = 301852344706746049;

	printf("%ld", temp);

	putchar(1 - 1);
	putchar(2 + 2);
	putchar(1 + 2 + 2 + 2 + 2);

	printf("\n");

	return (0);
}
