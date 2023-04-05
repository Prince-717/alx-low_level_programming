#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to a pointer to the head of a linked list.
 * @index: index of the node to delete.
 *
 * Return: 1 if it succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head, *prev_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && i < index)
	{
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);

	return (1);
}
