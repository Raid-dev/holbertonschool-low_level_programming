#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 *
 * Description: Concatenates two strings s1 and s2
 * @s1: The first string
 * @s2: The second string
 *
 * Return: NULL on failure, a pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i;

	if (s1 != NULL)
	{
		str = malloc(strlen(s1) + 1);

		if (str == NULL)
			return (NULL);

		for (i = 0; i < strlen(s1); i++)
			str[i] = s1[i];
	}

	if (s2 != NULL)
	{
		str = malloc(strlen(s1) + strlen(s2) + 1);

		if (str == NULL)
			return (NULL);

		for (i = strlen(s1); i < strlen(s2); i++)
			str[i] = s2[i];
	}

	str[strlen(s1) + strlen(s2)] = '\0';

	return (str);
}
