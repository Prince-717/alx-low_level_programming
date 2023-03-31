#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a structure.
 *
 * @h: Pointer to structure.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t ln = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		ln++;
	}

	return (ln);
}
