#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
 	int i = 1;
	int j = 2;
	int temp;
	
	int k = 0;

	while (k < 50)
	{
		printf("%d", i);
		printf("%d", j);

		temp = i + j;

		printf("%d", temp);

		i = j;

		j = temp;

		k++;
	}

	printf("\n");

	return (0);
}
