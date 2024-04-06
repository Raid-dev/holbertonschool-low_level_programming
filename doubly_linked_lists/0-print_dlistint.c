#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints the dlistint_t list h and returns the number of
 * elements
 * @h: The dlistint_t list to print
 *
 * Return: The number of elements.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);

		h = h->next;

		i++;
	}

	return (i);
}
