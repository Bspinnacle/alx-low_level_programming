#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node at
 * index of a listint_t linked list
 * @head: the beginning of a linstint_t list
 * @index: index of the node tobe deleted
 *
 * Return: 1 if it succeeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *curr_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(node);
	return (1);
	}

	while (i < index - 1)
	{
	if (node == NULL || (node->next) == NULL)
	return (-1);

	node = node->next;
	i++;
	}

	curr_node = node->next;
	node->next = curr_node->next;
	free(curr_node);

	return (1);
}
