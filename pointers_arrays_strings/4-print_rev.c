#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: Prints the pointer string s in reverse
 * @s: The input pointer
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length])
		length++;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);

		i++;
	}

	_putchar('\n');
}
