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
	int k;
	int z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			z = j + 1;
			for (k = i; k < 10; k++)
			{
				for (; z < 10; z++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(z + '0');

					if (i == 9 && j == 8 && k == 9 && z == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				z = 0;
			}
		}
	}

	return (0);
}
