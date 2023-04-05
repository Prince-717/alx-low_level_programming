#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to pointer to the first node of the list
 * @idx: Index of the list where the new node is to be added
 * @n: new node data
 *
 * Return: Address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *c_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	c_node = *head; /* Current node as c_node */

	for (i = 0; i < idx - 1 && c_node != NULL; i++)
		c_node = c_node->next;

	if (c_node == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = c_node->next;
	c_node->next = newnode;

	return (newnode);
}
