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
	void *ptr;
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	temp = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		temp[i] = 0;

	return (ptr);
}
