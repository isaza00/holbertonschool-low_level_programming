#include "holberton.h"
/**
 * _atoi - isdigit
 * @s: char
 * Return: prints alphabet
 */
int _atoi(char *s)
{
	int i = 0;
	int menos = 1;
	int n = 0;
	int found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (found == 1)
			{
			if (s[i] >= '0' && s[i] <= '9')
				found = 1;
			else
				found = 2;
			}
		if (found != 2)
		{
		if (s[i] == '-')
			menos *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			n *= 10;
			n += s[i] - '0';
			found = 1;
		}
		}
	}
	n *= menos;
	return (n);
}
