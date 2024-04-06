#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Returns the length of the string str
 * @str: The string
 *
 * Return: The length.
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node - Adds a new node at the beginning of the list_t list head
 * @head: The list_t list to add to
 * @str: The string to duplicate
 *
 * Return: The node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = (list_t *)malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;

	*head = node;

	return (*head);
}
