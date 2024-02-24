#include "main.h"

/**
 * print_alphabet - Prints the alphabet to stdout
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
