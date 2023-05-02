#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: the beginning of the list
 *
 * Return: the address of the node where the loop starts, or NULL
 * if there is no loop
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
		while (loop != node)
			{
			loop = loop->next;
			node = node->next;
			}
		return (node);
		}
	}

	return (NULL);

}
