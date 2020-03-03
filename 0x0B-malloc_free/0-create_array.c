#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - isdigit
 * @size: integer
 * @c: integer
 * Return: prints alphabet
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');
	str = malloc(sizeof(char) * size);
	if (str == '\0')
		return ('\0');
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

