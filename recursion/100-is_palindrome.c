#include "main.h"
#include <string.h>

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
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 *
 * Description: Returns 1 if the string s is a palindrome and 0 if not
 * @s: The string
 *
 * Return: Result from palindrome_checker.
 */

int is_palindrome(char *s)
{
	int size = strlen(s);

	if (size == 0)
		return (1);

	return (polyndrome_checker(s, 0, size - 1));
}
