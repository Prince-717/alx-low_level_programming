#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Returns the number of elements of a listint_t list.
 *
 * @h: Pointer to list.
 * Return: Number of elements in list.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
