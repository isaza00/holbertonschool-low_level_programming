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

	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		s = ptr;
		if (new_size > old_size)
			new_size = old_size;
		for (i = 0; i < new_size; i++)
			p[i] = s[i];
		free(ptr);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (p);
}
