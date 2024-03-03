#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 *
 * Description: Prints half of the pointer string str
 * @str: The input pointer
 */

void puts_half(char *str)
{
	int i = strlen(str) / 2;

	while (str[i])
	{
		_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
