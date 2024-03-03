#include "main.h"

/**
 * string_toupper - Entry point
 *
 * Description: Changes all lowercase letters of the string s to uppercase
 * @s: The input string
 *
 * Return: String
 */

char *string_toupper(char *s)
{
	int i;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
