#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for a digit for the character c
 * @c: The input character
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);

	return (0);
}
