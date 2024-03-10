#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0.
 *
 * Description: Compares two strings s1 and s2, and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @s1: The string
 * @s2: The string
 *
 * Return: 1 if s1 and s2 are identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (wildcmp(s1 + 1, s2))
			return (1);
		else if (wildcmp(s1, s2 + 1))
			return (1);
	}

	return (0);
}
