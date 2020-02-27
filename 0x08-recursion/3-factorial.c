#include "holberton.h"
/**
 * factorial - isdigit
 * @n: integer
 * Return: prints alphabet
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}