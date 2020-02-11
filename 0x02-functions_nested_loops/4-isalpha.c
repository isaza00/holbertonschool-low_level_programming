#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - prints alphabet
 * @c: param
 * Return: prints alphabet
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
