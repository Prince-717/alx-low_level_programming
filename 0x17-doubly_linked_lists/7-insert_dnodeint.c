#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node in a list
 * @h: head of the linked list
 * @idx: index to insert the new node
 * @n: int the new node should hold
 * Return: pointer to the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *new;

	new_node = malloc(sizeof(*new_node));
	if (!new)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (new_node->next)
			new_node->next->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (prev = *h; prev && idx > 1; idx--)
		prev = prev->next;
	if (idx == 1)
	{
		new_node->next = prev->next;
		new_node->prev = prev;
		prev->next = new_node;
		if (new_node->next)
			new_node->next->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
