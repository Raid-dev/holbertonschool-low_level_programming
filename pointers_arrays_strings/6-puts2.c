#include "main.h"

/**
 * _puts2 - Entry point
 *
 * Description: Prints every other character of the pointer string str
 * @str: The input pointer
 */

void puts2(char *str)
{
	int i = 0;

	while (str[2 * i])
	{
		_putchar(s[2 * i]);

		i++;
	}

	_putchar('\n');
}
