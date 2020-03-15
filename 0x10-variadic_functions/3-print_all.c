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
void print_all(const char *const format, ...)
{
	int i = 0;
	char *string;
	va_list args;

	va_start(args, n);

	i = n;
	if (n <= 0 || !separator)
		return;
	while (i--)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			string = "(nil)";
		if (i != 0)
		{
			printf("%s%s", string, separator);
		}
		if (i == 0)
			printf("%s\n", string);
	}
	va_end(args);
}