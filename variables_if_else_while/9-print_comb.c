#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 9)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i + '0');
			putchar(', ');
		}
		
		i++;
	}

	return (0);
}
