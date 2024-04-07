#include "main.h"
#include <stdio.h>

/**
* binary_to_uint - Converts the binary number b to unsigned int
* @b: The string containing binary
*
* Return: The unsigned integer.
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		uint = 2 * uint + (b[i] - '0');
	}

	return (uint);
}
