#include "main.h"
#include <stdio.h>

/**
* get_bit - Returns the value of a bit at the given index index
* @n: The integer to search in
* @index: The index of the bit
*
* Return: The value of a bit.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
