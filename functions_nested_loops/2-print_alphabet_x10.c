#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase to stdout
 */

void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i = 0;
	
	while (i < 10)
	{
		int j = 0;

		while (alphabet[j])
		{
			_putchar(alphabet[j]);

			j++;
		}

		i++;
	}
}
