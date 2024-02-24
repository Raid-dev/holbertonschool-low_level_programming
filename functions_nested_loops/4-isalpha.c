#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks if the character c is a letter
 * @c: The character to check
 *
 * Return: 1 and 0 (Success)
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);
}	
