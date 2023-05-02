#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a
 * new node at a given position
 * @head: the beginning of listint_t list
 * @idx:  the index of the list where the new node should be added.
 * Index starts at 0
 * @n: string to be inserted in the new node
 *
 * Return:  the address of the new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *node = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);
	}

	for (i = 0; node && i < idx; i++)
	{
	if (i == idx - 1)
	{
	new->next = node->next;
	node->next = new;
	return (new);
	}

	else
	node = node->next;
	}
	return (NULL);

}
