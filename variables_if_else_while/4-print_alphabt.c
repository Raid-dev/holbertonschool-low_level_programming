#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i = 0;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 26)
	{
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
		{
			putchar(alphabet[i]);
		}

		i++;
	}

	putchar('\n');

	return (0);
}
