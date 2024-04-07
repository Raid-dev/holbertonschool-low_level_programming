#include "main.h"
#include <stdio.h>

/**
* flip_bits - Returns the number of bits you would need to flip to get from one
* number to another
* @n: The first number
* @m: The second number
*
* Return: The number of bits.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int exclusive = n ^ m, current;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;

		if (current & 1)
			count++;
	}

	return (count);
}
