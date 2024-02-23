#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int i = 0;

	while (i < 10)
	{
		write(1, &i, 1);

		i++;
	}

	putchar('\n');

	return (0);
}
