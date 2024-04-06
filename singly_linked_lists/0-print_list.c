#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the list_t list h and returns the number of elements
 * @h: The list_lt list to print
 *
 * Return: The number of elements.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;

		i++;
	}

	return (i);
}
