#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at nth index of double linked list
 * @h: pointer to head
 * @idx: integer
 * @n: integer
 * Return: address of node inserted at the nth index or null if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *store;
	unsigned int i = 0;
	unsigned int number_nodes = 0;

	temp = *h;
	while (temp)
	{
		number_nodes += 1;
		temp = temp->next;
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp = *h;
	while (temp)
	{
		if (i == idx - 1)
		{
			store = temp->next;
			temp->next = new;
			new->prev = temp;
			new->next = store;
			store->prev = new;
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}