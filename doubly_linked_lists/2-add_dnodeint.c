#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of the dlistint_t list head
 * @head: The dlistint_t list to add to
 * @n: The integer of the new node
 *
 * Return: The new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
		(*head)->prev = node;

	*head = node;

	return (node);
}
