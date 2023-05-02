#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * loop_listint_abc -  a function that prints a listint_t linked list
 * @head: the beginning of the listint_t list
 *
 * Return:  the number of nodes in the list
 */

size_t loop_listint_abc(const listint_t *head)
{
	const listint_t *node, *new;
	size_t size = 1;

	if (head == NULL || head->next == NULL)

	return (0);

	node = head->next;
	new = (head->next)->next;

	while (new)
	{
	if (node == new)
		{
		node = head;

		while (node != new)
		{
			size++;
			node = node->next;
			new = new->next;
		}
		node = node->next;
	while (node != new)
		{
		size++;
		node = node->next;
		}
	return (size);
		}
	node = node->next;
	new = (new->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size, num = 0;

	size = loop_listint_abc(head);

	if (size == 0)
	{
	for (; head != NULL; size++)
		{
		printf("[%p] %d\n", (void *)head, head->n);

		head = head->next;
		}
	}
	else
	{
	for (num = 0; num < size; num++)
		{
		printf("[%p] %d\n", (void *)head, head->n);

		head = head->next;
		}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (size);

}
