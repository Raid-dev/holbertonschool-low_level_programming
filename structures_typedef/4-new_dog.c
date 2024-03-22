#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_cpy - Copies a string
 *
 * Description: Copies the string str
 * @str: The string to copy
 *
 * Return: NULL on failure, a copy of a string otherwise.
 */

char *str_cpy(char *str)
{
	unsigned int i = 0, j = 0;
	char *copy;

	while (str[i] != '\0')
		i++;

	copy = malloc((i + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		copy[j] = str[j];

	return (copy);
}

/**
 * new_dog - Creates a new dog
 *
 * Description: Creates a new dog with parameters name, age, owner
 * @name: The name of dog
 * @age: The age of dog
 * @owner: The owner of dog
 *
 * Return: NULL on failure, a pointer to new dog type otherwise.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = str_cpy(name);

	if (d->name == NULL)
	{
		free(d);

		return (NULL);
	}

	d->owner = str_cpy(owner);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);

		return (NULL);
	}

	d->age = age;

	return (d);
}
