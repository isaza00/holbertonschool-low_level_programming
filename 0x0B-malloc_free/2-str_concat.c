#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - isdigit
 * @s1: integer
 * @s2: integer
 * Return: prints alphabet
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (len1 = 0; s1[len1]; len1++)
	{}
	for (len2 = 0; s2[len2]; len2++)
	{}
	concatenate = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concatenate == NULL)
		return (NULL);
	if (s1 != NULL && s2 != NULL)
	{
		for (i = 0; i < len1; i++)
			concatenate[i] = s1[i];
		for (j = 0; j < len2; j++)
		{
			concatenate[i] = s2[j];
			i++;
		}
	}
	else if (s2 == NULL)
	{
		for (i = 0; i < len1; i++)
			concatenate[i] = s1[i];
	}
	else if (s1 == NULL)
	{
		for (i = 0; i < len2; i++)
			concatenate[i] = s2[i];
	}
	concatenate[i] = '\0';
	return (concatenate);
}
