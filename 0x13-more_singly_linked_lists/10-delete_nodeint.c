#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - isdigit
 * @head: integer
 * @index: integer
 * Return: prints alphabet
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *previous = NULL;

	if (!*head || !head)
		return (-1);
	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			if (previous)
				previous->next = temp->next;
			else
				*head = temp->next;
			free(temp);
			return (1);
		}
		previous = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
