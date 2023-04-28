#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end -  a function that adds a new node at the end of a list_t list
 * @head: the beginning of list
 * @str: string to be added
 *
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *new_end;
	size_t length;

	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
	return (NULL);

	new_end->str = strdup(str);

	for (length = 0; str[length]; length++)
	;

	new_end->len = length;
	new_end->next = NULL;
	node = *head;

	if (node == NULL)
	{
	*head = new_end;
	}

	else
	{
	while (node->next != NULL)
	node = node->next;
	node->next = new_end;
	}

	return (*head);
}
