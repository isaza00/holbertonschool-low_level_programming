#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - isdigit
 * @b: integer
 * Return: prints alphabet
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}


