#include "main.h"

/**
 * _puts - Entry point
 *
 * Description: Prints the pointer string s
 * @s: The input pointer
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);

		i++;
	}
}
