#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - isdigit
 * @head: integer
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

