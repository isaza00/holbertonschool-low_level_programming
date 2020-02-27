#include "holberton.h"
/**
 * is_prime_number - isdigit
 * @n: integer
 * Return: prints alphabet
 */
int prime_mine(int n, int inc)
{
	if ((n % inc  == 0) && (inc != n))
		return (0);
	if (inc > n)
		return (1);
	return (prime_mine(n, inc + 1));
}
int is_prime_number(int n)
{
	int inc = 2;

	if (n < 2)
		return (0);
	else
		return (prime_mine(n, inc));
}