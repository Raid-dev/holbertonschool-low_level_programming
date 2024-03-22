#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 *
 * Description: Frees the dog d
 * @d: The type of struct dog
 *
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->owner)
		free(d->owner);

	if (d->name)
		free(d->name);

	free(d);
}
