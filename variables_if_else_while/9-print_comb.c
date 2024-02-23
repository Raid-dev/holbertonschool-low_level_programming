#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	putchar(i + '0');
	putchar(',');

	i = 1;

	while (i < 10)
	{
		putchar(' ');
		putchar(i + '0');
		
		i++;
	}

	return (0);
}
