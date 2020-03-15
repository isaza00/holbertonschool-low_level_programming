#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all- isdigit
 * @n: integer
 * Return: prints alphabet
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	int num = 0;
	int sum = 0;
	va_list args;

	va_start(args, n);

	i = n;
	if (n == 0)
		return (0);
	while (i--)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
