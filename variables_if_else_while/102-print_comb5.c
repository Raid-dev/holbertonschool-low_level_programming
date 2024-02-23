#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j = 0; j < 100; j++)
		{	
			if (i < 10)
			{
				putchar(0);
				putchar(i + '0');
			}
			else
			{
				putchar(i);
			}

			putchar(' ');

			if (j < 10)
			{
				putchar(0);
				putchar(j + '0');
			}
			else
			{
				putchar(j);
			}
				
			if (i == 98 && j == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
