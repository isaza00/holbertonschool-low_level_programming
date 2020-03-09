#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - isdigit
 * @d: integer
 * Return: prints alphabet
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}
