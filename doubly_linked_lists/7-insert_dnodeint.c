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
	dlistint_t *node;

	unsigned int i;

	node = NULL;

	if (idx == 0)
		node = add_dnodeint(h, n);
	else
	{
		i = 1;

		while (*h != NULL)
		{
			if (i == idx)
			{
				if ((*h)->next == NULL)
					node = add_dnodeint_end(h, n);
				else
				{
					node = malloc(sizeof(dlistint_t));

					if (new != NULL)
					{
						node->n = n;
						node->next = (*h)->next;
						node->prev = *h;
						(*h)->next->prev = node;
						(*h)->next = node;
					}
				}
				break;
			}

			*h = (*h)->next;

			i++;
		}
	}

	return (node);
}
