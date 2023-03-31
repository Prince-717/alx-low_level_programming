#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * list_len - Function  that returns the number of elements in a linked.
 *
 * @h: Pointer to elements of a linked list.
 * Return: Number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;

		h = h->next;
	}

	return (n);
}
