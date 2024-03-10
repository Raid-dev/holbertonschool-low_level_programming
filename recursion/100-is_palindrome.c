#include "main.h"

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 *
 * Description: Returns 1 if the string s is a palindrome and 0 if not
 * @s: The string
 *
 * Return: 1 if a string is a palindrome, otherwise 0.
 */

int is_palindrome(char *s)
{
	int l = 0, i;

	while (s[l])
		l++;

	for (i = 0; i < l / 2; i++)
	{
		if (s[i] != s[l - i - 1])
		return (0);
	}

	return (1);
}
