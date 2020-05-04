#include "holberton.h"
/**
 * _isupper - isdigit
 * @c: integer
 * Return: prints alphabet
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
