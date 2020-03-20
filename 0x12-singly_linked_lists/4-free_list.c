#include <stdlib.h>
#include "lists.h"

/**
 * free_list - isdigit
 * @head: integer
 * Return: prints alphabet
 */

void free_list(list_t *head)
{
	list_t *aux;

	aux = head;
	while (aux != NULL)
	{
		if (aux->str != NULL)
			free(aux->str);
		free(aux);
		aux = aux->next;
	}
}


