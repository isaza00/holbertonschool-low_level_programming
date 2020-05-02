#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - add node at begining of double linked list
 * @h: pointer to hed
 * @n: integer
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	temp = *head;
	if (!*head)
	{
		new->next = NULL;
	}
	else
	{
		new->next = temp;
		temp->prev = new;
	}
	*head = new;
	return (new);
}

