#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - isdigit
 * @head: integer
 * @str: integer
 * Return: prints alphabet
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *old_node;

	old_node = *head;
	for (; str[i]; i++)
	{}
	*head = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	(*head)->len = i;
	if (str == NULL)
		(*head)->str = NULL;
	else
		(*head)->str = strdup(str);
	(*head)->next = old_node;
	return (*head);
}
