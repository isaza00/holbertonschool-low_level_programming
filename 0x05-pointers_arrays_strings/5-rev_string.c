#include "holberton.h"
/**
 * rev_string - isdigit
 * @s: integer
 * Return: prints alphabet
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char save = 0;
	int final = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	final = len - 1;

	for (i = final; i >= (final - i); i--)
	{
		save = s[(final - i)];
		s[(final - i)] = s[i];
		s[i] = save;
	}
}
