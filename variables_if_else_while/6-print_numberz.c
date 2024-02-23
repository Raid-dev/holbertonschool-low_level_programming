#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int i = 0;

	while (i < '10')
	{
		putchar(i);

		i++;
	}

	putchar('\n');

	return (0);
}
