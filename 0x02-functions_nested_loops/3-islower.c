#include "holberton.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * _islower - islower
 * @c: integer
 * Return: prints alphabet
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
