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
	char *h = haystack, *n = needle;

	if (n == "")
		return (h);
	else
	{
		while (*h != '\0')
		{
			if (*h == n[0])
			{
				unsigned int i = 0;

				while (*n != '\0')
				{
					if (*(h + i) != *n)
						break;

					n++;
					i++;
				}

				if (*n == '\0')
					return (h - 1);
			}

			h++;
		}
	}

	return (NULL);
}
