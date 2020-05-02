#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeend - get node at nth index of double linked list
 * @head: pointer to head
 * @index: integer
 * Return: node at the nth index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	while (head)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

