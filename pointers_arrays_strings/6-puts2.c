#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description: Prints every other character of the pointer string str
 * @str: The input pointer
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(*(str + i));

		i++;
	}

	_putchar('\n');
}
