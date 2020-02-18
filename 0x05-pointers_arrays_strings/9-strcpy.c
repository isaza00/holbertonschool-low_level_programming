#include "holberton.h"
/**
 * _strcpy - isdigit
 * @dest: char
 * @src: integer
 * Return: prints alphabet
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);	

}
