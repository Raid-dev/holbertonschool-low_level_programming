#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * Description: Locates the first occurence in the string s of any of the bytes
 * in the string accept
 * @s: The string
 * @accept: The string
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept, or
 * NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int bytes = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}

			a++;
		}

		s++;
	}

	return (NULL);
}
