#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to pointer to the first node of the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = NULL, *currentnode = *head, *next;

	while (currentnode != NULL)
	{
		next = currentnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = next;
	}

	*head = prevnode;
	return (*head);
}
