#include "main.h"

/**
 * rot13 - Entry point
 *
 * Description: Encodes the string s using rot13
 * @s: The input string
 *
 * Return: String
 */

char *rot13(char *s)
{
	int i = 0;
	char c;

	while (*(s + i) != '\0')
	{
		c = *(s + i);
		while ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
			if (c >= 110 || (c >= 78 && c <= 90))
			{
				*(s + i) = *(s + i) - 13;
				break;
			}
			*(s + i) = *(s + i) + 13;
			break;
		}
		i++;
	}

	return (s);
}
