#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * Description: Reallocates a memory block ptr from the size old_size to
 * new_size using malloc and free
 * @ptr: The pointer to reallocate
 * @old_size: The old size
 * @new_size: The new size
 *
 * Return: Previous pointer if new_size is equal to old_size, NULL if new_size
 * is equal to 0 and ptr is not NULL, a pointer to newly reallocated memory
 * otherwise.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);

		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		new_ptr[i] = ptr[i];

	return (new_ptr);
}
