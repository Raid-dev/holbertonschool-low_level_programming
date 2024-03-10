#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * Description: Prints the string s in reverse
 * @s: The string
 *
 * Return: Nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);

		_putchar(*s);
	}
}
