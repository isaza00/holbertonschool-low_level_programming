#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings- isdigit
 * @separator: integer
 * @n: integer
 * Return: prints alphabet
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i < n - 1 && !separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
