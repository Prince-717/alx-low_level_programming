#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Free a listint_t list
 * @h: A pointer to the pointer to the head node
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *current, *previous;

	if (h == NULL || *h == NULL)
		return (i);

	current = *h;
	while (current != NULL)
	{
		i++;
		if (current < current->next)
		{
			previous = current;
			current = current->next;
			free(previous);
		}
		else
		{
			free(current);
			break;
		}
	}
	*h = NULL;

	return (i);
}
