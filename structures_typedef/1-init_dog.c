#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes variables of type struct dog
 *
 * Description: Initializes the variables name, age, owner of type struct dog d
 * @d: The type of struct dog
 * @name: The name of dog
 * @age: The age of dog
 * @owner: The owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
