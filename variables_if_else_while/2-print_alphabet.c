#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long unsigned int i = 0;

	while (i < strlen("abcdefghijklmnopqrstuvwxyz"))
	{
		putchar("abcdefghijklmnopqrstuvwxyz"[i]);

		i++;
	}
	putchar("\n");

	return (0);
}
