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
	if (nmemb == 0 || size == 0)
		return NULL;

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return NULL;

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
