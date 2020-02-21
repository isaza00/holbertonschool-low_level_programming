#include "holberton.h"
/**
 * string_toupper - isdigit
 * @str: string
 * Return: prints alphabet
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
