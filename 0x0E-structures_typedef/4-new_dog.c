#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - isdigit
 * @name: integer
 * @age: integer
 * @owner: integer
 * Return: prints alphabet
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
