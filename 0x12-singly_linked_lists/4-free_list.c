#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - isdigit
 * @head: integer
 * Return: prints alphabet
 */
void free_list(list_t *head)
{
	list_t *temporal;

	temporal = head;
	while (temporal != NULL)
	{
		if (temporal->str != NULL)
			free(temporal->str);
		free(temporal);
		temporal = temporal->next;
	}
}

