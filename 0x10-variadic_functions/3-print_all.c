#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_char - prints a character
 *
 * @c: character to be printed
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - prints an integer
 *
 * @i: integer to be printed
 */
void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_float - prints a float
 *
 * @f: float to be printed
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_str - prints a string
 *
 * @s: string to be printed
 */

void print_str(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 */

void print_all(const char *const format, ...)
{
	var_types anything[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_str},
	{NULL, NULL}};

	unsigned int i, j;
	char *commsp;
	va_list args;

	i = 0;
	j = 0;
	commsp = "";

	va_start(args, format);

	while ((format != NULL) && (format[i] != '\0'))
	{
		while (j < 4)
		{
			if (format[i] == *(anything[j].car))
			{
				printf("%s", commsp);
				anything[j].f(args);
				commsp = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(args);
}
