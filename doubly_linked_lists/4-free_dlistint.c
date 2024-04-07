#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - Frees the dlistint_t list head
 * @head: The dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;

		head = head->next;

		free(temp->n);
		free(temp);
	}
}
