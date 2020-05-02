#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - length double linked list
 * @h: pointer to hed
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}