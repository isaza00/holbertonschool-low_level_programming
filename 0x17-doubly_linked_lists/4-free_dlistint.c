#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free nodes of double linked list
 * @head: pointer to head
 * Return: does not return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *aux;

	temp = head;
	while (temp)
	{
		aux = temp->next;
		free(temp);
		temp = aux;
	}
}
