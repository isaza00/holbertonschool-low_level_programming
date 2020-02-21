#include "holberton.h"
/**
 * leet - isdigit
 * @s: integer
 * Return: prints alphabet
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char min[] = "aeotl";
	char may[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == min[j] || s[i] == may[j])
				s[i] = num[j];
		}
	}
	return (s);
}
