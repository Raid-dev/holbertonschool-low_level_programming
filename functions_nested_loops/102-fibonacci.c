#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
 	long long int i = 1;
	long long int j = 2;
	long long int temp;
	
	int k = 0;

	printf("%d, ", i);
        printf("%d, ", j);

	while (k < 50)
	{
		temp = i + j;

		printf("%d", temp);

		i = j;

		if (k != 49)
			printf(", ");

		j = temp;

		k++;
	}

	printf("\n");

	return (0);
}
