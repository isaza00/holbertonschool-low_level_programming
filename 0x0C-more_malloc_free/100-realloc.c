#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - isdigit
 * @ptr: integer
 * @old_size: integer
 * @new_size: integer
 * Return: prints alphabet
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	int *p;
	char *s;

	if (new_size > old_size)
		p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	s = ptr;
	for (i = 0; i < old_size; i++)
		p[i] = s[i];
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	s = ptr;
	for (i = 0; i < old_size; i++)
		p[i] = s[i];
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (p);
}
