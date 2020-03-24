#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - isdigit
 * @head: integer
 * @n: integer
 * Return: prints alphabet
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *old_node;

	old_node = *head;
	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);
	(*head)->n = n;
	(*head)->next = old_node;
	return (*head);
}
