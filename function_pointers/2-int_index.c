#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer
 *
 * Description: Searches for an integer in the array by using the function
 * pointer
 * @array: The array of elements
 * @size: The size of array
 * @cmp: The function pointer to execute
 *
 * Return: The index of the first element for which the cmp function doesn't
 * return 0, -1 if size is less than or equal to 0 or no element matches.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
