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

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: The dlistint_t list to search in
 * @index: The index of node
 *
 * Return: The node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (index >= dlistint_len(head))
		return (NULL);

	while (i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
