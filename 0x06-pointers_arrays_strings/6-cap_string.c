#include "holberton.h"
/**
 * cap_string - isdigit
 * @s1: integer
 * Return: prints alphabet
 */
char *cap_string(char *s1)
{
	int i = 0;

	if (s1[0] >= 'a' && s1[0] <= 'z')
		s1[0] = s1[0] - 32;
	for (i = 1; s1[i] != '\0'; i++)
	{
		if (s1[i] == ' ' || s1[i] == '\t' || s1[i] == '\n' || s1[i] == ',' ||
			s1[i] == ';' || s1[i] == '.' || s1[i] == '!' || s1[i] == '?' ||
			s1[i] == '"' || s1[i] == '(' || s1[i] == ')' || s1[i] == '{' ||
			s1[i] == '}')
			if (s1[i + 1] != '\0' && (s1[i + 1] >= 'a' && s1[i + 1] <= 'z'))
				s1[i + 1] = s1[i + 1] - 32;
	}
	return (s1);
}
