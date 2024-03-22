#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Type structure
 *
 * Description: Dog type structure
 * @name: The name of dogs
 * @age: The age of dogs
 * @owner: The owner of dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
