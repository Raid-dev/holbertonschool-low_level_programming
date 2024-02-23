#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	putchar(i);
	putchar(',');

	i = 1;

	while (i < 10)
	{
		putchar(' ');
		putchar(i);
		
		i++;
	}

	return (0);
}
