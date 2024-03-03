#include "main.h"
#include <stdio.h>

/**
 * leet - Entry point
 *
 * Description: Encodes the string s into 1337
 * @s: The input string
 *
 * Return: String
 */

char *leet(char *s)
{
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
				*s = n[i] + '0';
		}

		s++;
	}

	printf("%s\n", s);
	
	return (s);
}
