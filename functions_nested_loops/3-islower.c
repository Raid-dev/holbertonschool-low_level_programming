#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks if the character c is lowercase or not
 * @c: The character to check
 *
 * Return: 1 and 0 (Success)
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);
}
