#include "lists.h"

/**
 * add_dnodeint - add node to a linked list
 * @head: pointer to the head of a linked list
 * @n: integer the new node should contain
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (head)
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	else
		new_node->next = NULL;
	return (new_node);
}
