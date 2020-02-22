#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - isdigit
 * @n1: integer
 * @n2: integer
 * @r: integer
 * @size_r: integer
 * Return: prints alphabet
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int len1 = 0;
	int len2 = 0;
	int l1 = 0;
	int l2 = 0;
	char *resultado;

	void rev_string(char *s);
	char *calculadora(char *, char *, char *, int, int, int);
	for (i = 0; n1[i] != '\0'; i++)
		len1++;
	for (i = 0; n2[i] != '\0'; i++)
		len2++;
	if (len1 >= len2)
	{
		l1 = len1 + 1;
		l2 = len2 + 1;
	}
	else
	{
		l1 = len2 + 1;
		l2 = len1 + 1;
	}
	resultado = calculadora(n1, n2, r, l1, l2, size_r);
	if (resultado == 0)
	{
		return (0);
	}
	rev_string(r);
	return (r);
}

/**
 * calculadora - isdigit
 * @n1: int
 * @n2: int
 * @r: int
 * @l1: int
 * @l2: int
 * @size_r: int
 * Return: prints alphabet
 */
char *calculadora(char *n1, char *n2, char *r, int l1, int l2, int size_r)
{
	int i = 0;
	int suma = 0;
	int llevo = 0;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; (i <= (l1 - 2)) || (llevo == 1); i++)
	{
		if ((l2 - 2 - i) >= 0)
			s2 = n2[l2 - 2 - i] - '0';
		else
			s2 = 0;
		if ((l1 - 2 - i) >= 0)
			s1 = n1[l1 - 2 - i] - '0';
		else
			s1 = 0;
		suma = s1 + s2 + llevo;
		llevo = suma / 10;
		if (i < (size_r - 1))
		{
			r[i] = (suma % 10) + '0';
		}
		else
			return (0);
	}
	r[i] = '\0';
	return (r);
}
/**
 * rev_string - isdigit
 * @s: string
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
