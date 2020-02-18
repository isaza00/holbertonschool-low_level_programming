#include "holberton.h"
/**
 * puts_half - isdigit
 * @str: integer
 * Return: prints alphabet
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int ini = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (ini % 2 == 0)
		ini = len / 2;
	else
		ini = (len - 1) / 2;
	for (i = (len - ini); str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
