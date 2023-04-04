#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 -  Frees a listint_t list.
 *
 * @head: Pointer to list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp_node = *head;
		
		*head = (*head)->next;

		free(temp_node);
	}

	*head = NULL;
}
