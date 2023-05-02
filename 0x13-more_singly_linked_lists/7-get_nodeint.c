#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index -  a function that returns the nth node
 * of a listint_t linked list
 * @index: the index of the node, starting at 0
 * @head:the beginning of a listint_t list
 *
 * Return: the nth node of a listint_t linked list
 * or NULL if the node does not exist
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *node = head;

	while ((node) && (n < index))
	{
	node = node->next;
	n++;
	}

	return (node ? node : NULL);
}
