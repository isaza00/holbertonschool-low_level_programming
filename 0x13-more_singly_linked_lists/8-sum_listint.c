#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - isdigit
 * @head: integer
 * @index: integer
 * Return: prints alphabet
 */

int sum_listint(listint_t *head)
{
	size_t i = 0;
	const listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
