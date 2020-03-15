#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - isdigit
 * @format: integer
 * Return: prints alphabet
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	va_list args;
	char *s;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'f':
				printf("%f", va_arg(args, double));
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					if (format[i + 1] != '\0')
						printf(", ");
				} else
				{
					printf("%s", s);
					if (format[i + 1] != '\0')
						printf(", ");
				} break;
		} i++;
	} printf("\n");
	va_end(args);
}

