#include "lists.h"

/**
 * delete_dnodeint_at_index - free a node in a linked list
 * @head: head of a linked list
 * @index: index of the node to free
 * Return: Success(1), Error(-1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_d = *head;

	if (index == 0 && node_d)
	{
		*head = node_d->next;
		if (*head)
			(*head)->prev = NULL;
		free(node_d);
		return (1);
	}
	while (node_d && index > 0)
	{
		node_d = node_d->next;
		index--;
	}
	if (index == 0 && node_d)
	{
		node_d->prev->next = node_d->next;
		if (node_d->next)
			node_d->next->prev = node_d->prev;
		free(node-d);
		return (1);
	}
	return (-1);
}
