#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - isdigit
 * @head: integer
 * @str: integer
 * Return: prints alphabet
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node, *temp;

	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[i])
		i++;
	new_node->len = i;
	if (str != NULL)
		new_node->str = strdup(str);
	else
		new_node->str = NULL;
	if (temp != NULL)
		temp->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
