#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe -  a function that frees a listint_t list
 * This function can free lists with a loop
 * @h: pointer to the first node in the linked list
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int n;
	listint_t *node;

	if (h == NULL || *h == NULL)
	return (0);

	while (*h)
	{
	n = *h - (*h)->next;

	if (n > 0)
	{
	node = (*h)->next;
	free(*h);
	*h = node;
	size++;
	}

	else
		{
		free(*h);
		*h = NULL;
		size++;
		break;
		}
	}

	*h = NULL;
	return (size);

}
