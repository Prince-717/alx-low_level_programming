#include "lists.h"

/**
 * print_dlistint - Print all elements of a linked list
 * @h: head of the linked list
 * Return: Return the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
