#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 26; i > 0; --i)
	{
		putchar(alphabet[i]);
	}

	printf('\n');

	return (0);
}
