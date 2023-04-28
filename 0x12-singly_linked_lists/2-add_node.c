#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: beginning of list
 * @str: string to be added
 *
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	while (str[length])
	length++;

	new->str = strdup(str);
	new->len = length;
	new->next = *head;
	*head = new;

	return (new);
}
