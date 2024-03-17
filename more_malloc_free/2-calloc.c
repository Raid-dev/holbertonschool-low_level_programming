#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc
 *
 * Description: Allocates memory for an array of nmemb elements of size
 * bytes each
 * @nmemb: The number of elements
 * @size: The bytes of each element
 *
 * Return: NULL if nmemb or size is 0 or on failure, a pointer to
 * the allocated memory otherwise.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **arr, i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = malloc(size);

		if (arr[i] == NULL)
			return (NULL);

		for (j = 0; j < size; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
