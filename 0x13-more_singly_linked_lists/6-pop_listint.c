#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to a pointer that points to the head node.
 *
 * Return: (n) of the deleted head node, or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	
	listint_t *temp_node;

	if (*head == NULL || head == NULL)
		return (0);
	
	temp_node = *head;

	data = temp_node->n;

	*head = (*head)->next;

	free(temp_node);

	return (data);
}
