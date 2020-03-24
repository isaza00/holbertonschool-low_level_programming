#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - isdigit
 * @head: integer
 * Return: prints alphabet
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	aux = head;
	while (aux != NULL)
	{
		free(aux);
		aux = aux->next;
	}
}

