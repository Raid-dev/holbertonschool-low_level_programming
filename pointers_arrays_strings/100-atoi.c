#include "main.h"

/**
 * _atoi - Entry point
 *
 * Description: Converts the pointer string s to integer
 * @s: The input pointer
 *
 * Return: Integer
 */

int _atoi(char *s)
{
	int b, i, minus = 0, size = 0;
	unsigned int a = 0;

	while (s[size])
		size++;

	for (i = 0; i < size; i++)
	{
		if (*(s + i) == 45)
			minus += 1;

		if (*(s + i) < 58 && *(s + i) > 47)
		{
			a = a * 10 + (*(s + i) - 48);

			if (i != size - 1 && (*(s + i + 1) > 57 || *(s + i + 1) < 48))
				break;
		}
	}

	if (minus % 2 == 1)
		b = -1 * a;
	else
		b = a;

	return (b);
}
