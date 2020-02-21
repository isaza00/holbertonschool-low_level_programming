#include "holberton.h"
/**
 * rot13 - isdigit
 * @s: integer
 * Return: prints alphabet
 */
char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	int found = 0;
	char prerot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; prerot[j] != '\0' && found == 0; j++)
		{
			if (s[i] == prerot[j])
			{
				s[i] = rot[j];
				found = 1;
			}
		}
		found = 0;
	}
	return (s);
}
