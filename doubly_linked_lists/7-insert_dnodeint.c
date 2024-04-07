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
			*head = (*head)->prev;
	}

	return (node);
}

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

	if (node == NULL)
		return (NULL);

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
