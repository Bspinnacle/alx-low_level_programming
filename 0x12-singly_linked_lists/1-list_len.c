#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  a function that returns the number of elements
 * in a linked list_t list
 * @h: Linked list
 *
 * Return: Always 0 (success)
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		h = h->next;
		element++;
	}

		return (element);
}
