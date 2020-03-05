#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - isdigit
 * @min: integer
 * @max: integer
 * Return: prints alphabet
 */
int *array_range(int min, int max)
{
	int i = 0;
	int j = 0;
	int *p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++, j++)
		p[j] = i;
	return (p);
}