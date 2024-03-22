#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
