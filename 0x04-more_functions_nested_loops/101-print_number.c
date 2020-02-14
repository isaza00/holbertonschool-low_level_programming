#include "holberton.h"
#include <stdio.h>
/**
 * print_number - isdigit
 * @n: integer
 * Return: prints alphabet
 */
void print_number(int n)
{
	int digits = 0;
	int number;
	int sum = 0;
	int miles = 1;

	int reverse(int, int);
	number = n;
	while (number)
	{
		number /= 10;
		miles *= 10;
		digits++;
	}
	sum = reverse(n, digits);
	if (sum == 0)
		_putchar(sum + '0');
	else
	{
		if (n < 0)
			_putchar('-');
		while (sum)
		{
			_putchar((sum % 10) + '0');
			sum /= 10;
		}
	}
}
/**
 * reverse - isdigit
 * @n: integer
 * @digits: integer
 * Return: prints alphabet
 */
int reverse(int n, int digits)
{
	int number;
	int residuo;
	int sum = 0;
	int i;
	int j;

	if (n >= 0)
		number = n;
	else
		number = n * -1;
	for (i = (digits - 1); i > 0; i--)
	{
		residuo = number % 10;
		number /= 10;
		for (j = 1; j <= i; j++)
			residuo *= 10;
		sum += residuo;
		if (number < 10)
			sum += number;
	}
	return (sum);
}
