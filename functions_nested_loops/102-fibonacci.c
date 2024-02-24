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
		putc(i);
		putc(j);

		temp = i + j;

		putc(temp);

		i = j;

		j = temp;

		k++;
	}

	printf("\n");

	return (0);
}
