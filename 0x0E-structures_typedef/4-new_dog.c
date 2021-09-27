#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: pointer to new dog(success) otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n, x, p;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (p = 0; p < n; p++)
		dog->name[p] = name[p];
	dog->age = age;
	for (x = 0; owner[x]; x++)
		;
	x++;
	dog->owner = malloc(x * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (p = 0; p < x; p++)
		dog->owner[p] = owner[p];
	return (dog);
}
