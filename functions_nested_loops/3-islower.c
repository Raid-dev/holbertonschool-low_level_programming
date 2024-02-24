#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for lowercase character
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);
}
