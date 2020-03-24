#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - isdigit
 * @h: integer
 * Return: prints alphabet
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
