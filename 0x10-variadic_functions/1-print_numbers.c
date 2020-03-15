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
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
