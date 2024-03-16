#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it with a specific
 * char
 *
 * Description: Creates an array of chars of the size size, and initializes
 * it with the specific char c
 * @size: The size of the array to create
 * @c: The character c to initialize
 *
 * Return: NULL if size is 0 or it fails, a pointer to the array otherwise.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *arr = malloc(size + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[size] = '\0';

	return (arr);}
