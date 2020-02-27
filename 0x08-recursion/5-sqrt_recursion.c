#include "holberton.h"
/**
 * sqrt_mine - isdigit
 * @n: integer
 * @inc: integer
 * Return: prints alphabet
 */
int sqrt_mine(int n, int inc)
{
	if ((inc * inc) > n)
		return (-1);
	if ((inc * inc) == n)
		return (inc);
	return (sqrt_mine(n, inc + 1));
}
/**
 * _sqrt_recursion - isdigit
 * @n: integer
 * Return: prints alphabet
 */
int _sqrt_recursion(int n)
{
	int inc = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (sqrt_mine(n, inc));
}

