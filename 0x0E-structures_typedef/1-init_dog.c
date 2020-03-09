#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - isdigit
 * @d: integer
 * @name: integer
 * @age: integer
 * @owner: integer
 * Return: prints alphabet
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
