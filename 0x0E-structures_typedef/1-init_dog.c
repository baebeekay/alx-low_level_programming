#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize the variable struct dog
 * @d: struct to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;

}
