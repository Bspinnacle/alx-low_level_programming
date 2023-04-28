#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: The beginning of list
 *
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
		free(node->str);

	}
}
