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
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
