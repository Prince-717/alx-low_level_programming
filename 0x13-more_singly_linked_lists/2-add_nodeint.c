#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add new node at the beginning of a listint_t list.
 *
 * @head: Pointer to pointer pointing to listint_t list.
 * @n: Number to be added to linked list.
 *
 * Return: Pointer to new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node; /* New node */

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;

	n_node->next = *head;

	*head = n_node;

	return (n_node);
}
