#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers- isdigit
 * @separator: integer
 * @n: integer
 * Return: prints alphabet
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	va_list args;

	va_start(args, n);

	i = n;
	if (n == 0 || !separator)
		return;
	while (i--)
	{
		if (i != 0)
			printf("%d%s", va_arg(args, int), separator);
		if (i == 0)
			printf("%d\n", va_arg(args, int));
	}
	va_end(args);
}
