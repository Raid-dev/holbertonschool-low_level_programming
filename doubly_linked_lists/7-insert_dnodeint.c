#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node to the dlistint_t list h
 * at the given position idx
 * @h: The dlistint_t list
 * @idx: The index where the new node should be added
 * @n: The integer of node
 *
 * Return: The node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;

	dlistint_t *node;

	if (idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0)
		node = add_dnodeint(&(*h), n);
	else if (idx == dlistint_len(*h))
		node = add_dnodeint_end(&(*h), n);
	else
	{
		node = (dlistint_t *)malloc(sizeof(dlistint_t));

		if (node == NULL)
			return (NULL);

		while (i < idx)
		{
			*h = (*h)->next;
			i++;
		}

		(*h)->next = node;

		node->prev = *h;
		node->next = (*h)->next;

		while ((*h)->prev != NULL)
			*h = (*h)->prev;
	}

	return (node);
}
