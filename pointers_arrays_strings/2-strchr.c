#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * Description: Locates the character c in the string s
 * @c: The character
 * @s: The string
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (0);

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
