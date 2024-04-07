#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of the dlistint_t list head
 * @head: The dlistint_t list to add to
 * @n: The integer to assign
 *
 * Return: The new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head == NULL)
	{
		node->prev = NULL;
		node->next = NULL;

		*head = node;
	}
	else
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;

		(*head)->next = node;

		node->prev = *head;
		node->next = NULL;

		while ((*head)->prev != NULL)
			*head = *head->prev;
	}

	return (node);
}
