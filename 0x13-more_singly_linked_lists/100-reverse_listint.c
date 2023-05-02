#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: the beginning of a listint_t list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tail = NULL;
	listint_t *next = NULL;

	while (*head)
	{
	next = (*head)->next;
	(*head)->next = tail;
	tail = *head;
	*head = next;
	}
	*head = tail;
	return (*head);

}
