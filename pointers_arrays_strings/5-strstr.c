#include "main.h"

/**
 * _strstr - Locates a substring
 *
 * Description: Finds the first occurrence of the substring needle in the
 * string haystack
 * @needle: The string
 * @haystack: The string
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			unsigned int i = 0;

			while (*needle != '\0')
			{
				if (*haystack + i != *needle)
					break;

				needle++;
				i++;
			}

			if (*needle == '\0')
				return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
