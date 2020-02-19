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
	int number = 0;
	int found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (found == 1)
			if (!(s[i] >= '0' && s[i] <= '9'))
				found = 2;
		if (found != 2)
		{
		if (s[i] == '-')
			menos *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			number *= 10;
			number += s[i] - '0';
			found = 1;
		}
		}
	}
		number *= menos;
	return (number);
}
