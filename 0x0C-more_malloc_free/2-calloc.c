#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - isdigit
 * @nmemb: integer
 * @size: integer
 * Return: prints alphabet
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (p);
}

