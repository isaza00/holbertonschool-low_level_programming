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
	unsigned int i = 0;
	listint_t *temp, *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		(new)->next = temp;
		*head = new;
		return (new);
	}
	while (temp)
	{
		if (i == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
