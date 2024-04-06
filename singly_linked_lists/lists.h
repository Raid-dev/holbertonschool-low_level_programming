#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct list - Linked List type structure
 *
 * @str: The string of list
 * @len: The length of list
 * @next: The pointer to the next list
 */

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

/**
 * _putchar - Writes the character c
 * @c: The character to write
 * Return: The character.
 *
 * _strlen - Returns the length of string
 *
 * print_list - Prints the list_t list h and returns the number of elements
 *
 * list_len - Returns the number of elements in the linked list_t list h
 *
 * add_node - Adds a new node at the beginning of the list_t list head
 *
 * add_node_end - Adds a new node at the end of the list_t list head
 *
 * free_list - Frees the list_t list head
 */

int _putchar(char c);

int _strlen(char *str);

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif
