#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 *
 * Description: Splits the string str into words
 * @str: The string to split
 *
 * Return: NULL if str is NULL or str is empty or on failure, a pointer to
 * an array of strings otherwise.
 */

char **strtow(char *str)
{
	char **s;
	int i = 1, row_count = 0, l = 0;

	while (*(str + i - 1) != '\0')
	{
		if (*(str + i - 1) != 32 && (*(str + i) == 32 || *(str + i) == '\0'))
			row_count++;
		i++;
	}
	s = malloc((row_count + 1) * sizeof(char *));
	if (row_count == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < row_count)
	{
		while (*str == 32)
			str++;
		while (*(str + l) != 32 && *(str + l) != '\0')
			l++;

		s[i] = (char *)malloc(l + 1);

		if (s[i] == NULL)
			return (NULL);
		l = 0;
		while (*str != 32 && *str != '\0')
		{
			s[i][l] = *str;
			str++;
			l++;
		}
		s[i][l] = '\0';
		i++;
		l = 0;
	}
	return (s);
}
