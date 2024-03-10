#include "main.h"

/**
 * _puts_recursion - Prints a string
 *
 * Description: Prints the string s
 * @s: The string
 *
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);

		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
