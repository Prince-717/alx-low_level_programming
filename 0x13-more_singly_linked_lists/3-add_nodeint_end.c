#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add new node at the beginning of a listint_t list.
 *
 * @head: Pointer to pointer pointing to listint_t list.
 * @n: Number to be added to linked list.
 *
 * Return: Pointer to new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node; /* New node */
	listint_t *l_node;

	n_node = malloc(sizeof(listint_t));

	if (!n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (!*head)
		*head = n_node;
	else
	{
		l_node = *head;
		while (l_node->next)
			l_node = l_node->next;

		l_node->next = n_node;
	}
	return (n_node);
}
