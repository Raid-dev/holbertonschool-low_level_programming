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
	int i = 0;

	while (str[i])
		i++;

	i = i / 2 + 1;

	while (str[i])
	{
		_putchar(*(str + i));

		i++;
	}

	_putchar('\n');
}
