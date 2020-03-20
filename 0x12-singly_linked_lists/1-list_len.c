#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - isdigit
 * @h: integer
 * Return: prints alphabet
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
