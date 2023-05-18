#include "lists.h"

/**
 * print_dlistint - Print all elements of a linked list
 * @h: head of the linked list
 * Return: Return the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	if (h == NULL)
		return (node_count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
