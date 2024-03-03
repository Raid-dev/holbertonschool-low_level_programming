#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: Prints the pointer string s in reverse
 * @s: The input pointer
 */

void print_rev(char *s)
{
	int i = 0;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);

		i++;
	}

	_putchar('\n');
}
