#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at the end
 * of a listint_t list
 * @head: the beginning of list
 * @n: node to be added
 *
 * Return:  the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *new_end;

	new_end = malloc(sizeof(listint_t));
	if (new_end == NULL)
	return (NULL);


	new_end->n = n;
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
