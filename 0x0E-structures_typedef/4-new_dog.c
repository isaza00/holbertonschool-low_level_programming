#include <stdlib.h>
#include <stdio.h>
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
	char *new_name;
	char *new_owner;
	int i = 0;
	int len1 = 0;
	int len2 = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		len1++;
	for (i = 0; owner[i]; i++)
		len1++;
	new_name = malloc(sizeof(char) * len1 + 1);
	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * len2 + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';
	for (i = 0; owner[i]; i++)
		new_owner[i] = owner[i];
	new_owner[i] = '\0';
	d->name = new_name;
	d->age = age;
	d->owner = new_owner;
	return (d);
}
