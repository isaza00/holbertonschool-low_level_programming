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
	int salida = 0;

	for (i = 0; (!(s[i] >= '0' && s[i] <= '9')); i++)
	{
		if (s[i] == '-')
			menos *= -1;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		number = (number * 10) + s[i] - '0';
		i++;
	}
	salida = number * menos;
	return (salida);
}
