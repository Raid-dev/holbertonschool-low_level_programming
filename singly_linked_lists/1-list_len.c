#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list_t list h
 * @h: The list_lt list to return its length
 *
 * Return: The number of elements.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
