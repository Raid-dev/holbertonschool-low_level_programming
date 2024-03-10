#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * Description: Gets the length of the prefix substring accept in the string s
 * @accept: The substring
 * @s: The string
 *
 * Return: The number of bytes in the initial segment of s which consists only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				bytes++;
				break;
			}

			a++;
		}

		if (*a == '\0')
			break;

		s++;
	}

	return (bytes);
}
