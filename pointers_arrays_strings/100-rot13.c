#include "main.h"

/**
 * rot13 - Entry point
 *
 * Description: Encodes the string s using rot13
 * @s: The input string
 */

char *rot13(char *s)
{
	int i = 0;
	char c;

	while (*(a + i) != '\0')
	{
		c = *(a + i);
		while ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
			if (c >= 110 || (c >= 78 && c <= 90))
			{
				*(a + i) = *(a + i) - 13;
				break;
			}
			*(a + i) = *(a + i) + 13;
			break;
		}
		i++;
	}

	return (a);
}
