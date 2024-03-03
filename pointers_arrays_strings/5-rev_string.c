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

	int start;
	int end;

	char temp;

	while (s[length])
		length++;

	start = 0;
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
