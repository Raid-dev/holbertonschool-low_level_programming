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
	while (*(s) != c && *(s) != '\0')
		s++;

	if (*(s) == c)
		return (s);

	if (*(s) == '\0')
		return (NULL);

	return (NULL);
}
