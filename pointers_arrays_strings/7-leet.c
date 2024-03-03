#include "main.h"

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
	int i;

	if (s == NULL)
		return NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			s[i] = c == 'a' || c == 'A' ? '4' :
			c == 'e' || c == 'E' ? '3' :
			c == 'o' || c == 'O' ? '0' :
			c == 't' || c == 'T' ? '7' :
			c == 'l' || c == 'L' ? '1' : c;
		}
	}

	return (s);
}
