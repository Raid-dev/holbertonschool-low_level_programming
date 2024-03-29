#include "main.h"

/**
 * palindrome_checker - Checks the palindrome using recursion
 *
 * Description: Checks the palindrome s using recursion
 * @s: The string
 * @i: The integer
 * @n: The integer
 *
 * Return: 1 if a string is a palindrome, otherwise 0.
 */

int palindrome_checker(char *s, int i, int n)
{
	if (i == n)
		return (1);
	else if (*(s + i) != *(s + n))
		return (0);
	else if (i <= n)
		return (palindrome_checker(s, i + 1, n - 1));
	return (1);
}

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

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 *
 * Description: Returns 1 if the string s is a palindrome and 0 if not
 * @s: The string
 *
 * Return: Result from palindrome_checker.
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length == 0)
		return (1);

	return (palindrome_checker(s, 0, length - 1));
}
