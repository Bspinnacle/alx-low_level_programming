#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -  a function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head:the beginning of a listint_t list
 *
 * Return: the sum of all the data (n) of a listint_t linked list
 * or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
	sum += node->n;
	node = node->next;
	}

	return (sum);
}
