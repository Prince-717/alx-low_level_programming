#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;

	while (count < index && node != NULL)
	{
		node = node->next;
		count++;
	}
	if (count == index && node != NULL)
		return (node);
	else
		return (NULL);
}
