#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	char base16[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(base16[i]);
	}

	putchar('\n');

	return (0);
}
