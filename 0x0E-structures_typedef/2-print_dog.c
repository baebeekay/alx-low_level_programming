#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints dog
 *
 * @d: elements to print
 */
void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{

		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
