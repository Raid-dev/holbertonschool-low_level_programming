#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list h
 * @h: The dlistint_t list to return its length
 *
 * Return: The number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
