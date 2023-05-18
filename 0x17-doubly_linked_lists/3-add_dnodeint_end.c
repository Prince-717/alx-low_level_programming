#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end of linked list
 * @head: pointer to the head of a linked list
 * @n: integer that the new node should hold
 * Return: pointer to the allocated node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (head && *head)
	{
		end_node = *head;
		while (end_node->next)
			end_node = end_node->next;
		end_node->next = new_node;
		new_node->prev = end_node;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
