#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - Returns the sum of all the data (n) of the dlistint_t linked
 * list head
 * @head: The dlistint_t list
 *
 * Return: The sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0, sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;

		i++;
	}

	return (sum);
}
