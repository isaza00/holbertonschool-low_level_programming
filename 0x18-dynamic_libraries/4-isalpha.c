#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - prints alphabet
 * @c: param
 * Return: prints alphabet
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
