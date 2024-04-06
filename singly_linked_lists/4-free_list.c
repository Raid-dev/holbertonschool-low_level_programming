#include "lists.h"

/**
 * free_list - Frees the list_t list head
 * @head: The list_t list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;

		head = head->next;

		free(tmp->str);
		free(tmp);
	}
}
