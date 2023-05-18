#include "lists.h"

/**
 * dlistint_len - prints length of a linked list
 *
 * @h: head of the linked list
 * Return: Returns the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length_dl = 0;

	while (h)
	{
		length_dl++;
		h = h->next;
	}
	return (length_dl);
}
