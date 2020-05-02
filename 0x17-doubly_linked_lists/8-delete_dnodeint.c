#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at nth index of double linked list
 * @head: pointer to head
 * @index: integer
 * Return: address of node inserted at the nth index or null if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *store_next, *store_prev;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (temp->next)
		{
			temp->next->prev = NULL;
			*head = temp->next;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			store_next = temp->next;
			store_prev = temp->prev;
			temp->prev->next = store_next;
			temp->next->prev = store_prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}

