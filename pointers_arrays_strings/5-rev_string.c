#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: Reverses the pointer string s
 * @s: The input pointer
 */

void rev_string(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	char temp[length];

	for (i = 0; i < length; i++)
	{
		temp[i] = s[length - i - 1];
	}

	for (i = 0; i < length; i++)
	{
		s[i] = temp[i];
	}
}
