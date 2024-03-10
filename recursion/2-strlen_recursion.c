#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * Description: Returns the length of the string s
 * @s: The string
 *
 * Return: Length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
