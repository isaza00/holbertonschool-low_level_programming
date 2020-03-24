#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - isdigit
 * @head: integer
 * @index: integer
 * Return: prints alphabet
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = NULL;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
