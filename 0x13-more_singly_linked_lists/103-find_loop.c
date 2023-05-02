#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop = head;
	listint_t *node = head;

	if (!head)
	return (NULL);

	while (node && loop && node->next)
	{
	node = node->next->next;
	loop = loop->next;

	if (node == loop)
		{
		loop = head;
		if (loop != node)
			{
			loop = loop->next;
			node = node->next;
			}
		return (node);
		}
	}

	return (NULL);

}
