#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name- isdigit
 * @name: integer
 * @f: integer
 * Return: prints alphabet
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
