#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter on each element of
 * an array
 *
 * Description: Executes the function action on each element of the array array
 * of size size
 * @array: The array of elements
 * @size: The size of array
 * @action: The function to execute
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);

		i++;
	}
}
