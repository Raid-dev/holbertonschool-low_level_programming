#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i = 0;

	while (alphabet[i])
	{
		_putchar(alphabet[i]);

		i++;
	}
}
