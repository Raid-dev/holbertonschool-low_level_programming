#ifndef LIST_H
#define LIST_H

#include <stdio.h>

/**
 * struct dlistint_s - Doubly Linked List type structure
 *
 * @n: The integer of node
 * @prev: The pointer to the previous node
 * @next: The pointer to the next node
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - Prints the dlistint_t list h and returns the number of
 * elements
 * @h: The dlistint_t list
 *
 * Return: The number of elements.
 *
 * dlistint_len - Returns the number of elements in the doubly linked
 * dlistint_t h
 *
 * add_dnodeint - Adds a new node at the beginning of the dlistint_t list head
 *
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 *
 * free_dlistint - Frees a dlistint_t list
 *
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 *
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked
 * list
 *
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t
 * linked list
 */

size_t print_dlistint(const dlistint_t *h);

size_t dlistint_len(const dlistint_t *h);

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

void free_dlistint(dlistint_t *head);

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

int sum_dlistint(dlistint_t *head);

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
