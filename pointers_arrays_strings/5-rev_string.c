#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: Reverses the pointer string s
 * @s: The input pointer
 */

void rev_string(char *s)
{
	char temp = s;

	int length = 0;
	int i;

	while (s[length])
		length++;

	for (i = length - 1; i >= 0; i--)
	{
		temp[length - i - 1] = s[i];
	}

	*s = temp;
}
