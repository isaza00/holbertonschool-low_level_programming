#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - isdigit
 * @head: integer
 * @idx: integer
 * @n: integer
 * Return: prints alphabet
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	while (temp != NULL)
	{
		if (i == (idx - 1))
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->next = temp->next;
			temp->next = new;
			new->n = n;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
