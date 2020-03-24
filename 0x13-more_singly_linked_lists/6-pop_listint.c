#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - isdigit
 * @head: integer
 * Return: prints alphabet
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int temp = 0;

	if (*head == NULL)
		return (0);
	aux = (*head)->next;
	temp = (*head)->n;
	free(*head);
	*head = aux;
	return (temp);
}
