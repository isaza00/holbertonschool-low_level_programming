#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - isdigit
 * @h: integer
 * Return: prints alphabet
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
