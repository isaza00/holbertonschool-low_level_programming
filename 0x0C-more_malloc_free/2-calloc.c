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
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}

