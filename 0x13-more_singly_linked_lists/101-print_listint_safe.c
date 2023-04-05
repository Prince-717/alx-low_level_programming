#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list, even with loops
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *currentnode = head, *prevnode;
	size_t count = 0;

	while (currentnode != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *) currentnode, currentnode->n);

		prevnode = currentnode;
		currentnode = currentnode->next;

		if (currentnode >= prevnode)
		{
			printf("-> [%p] %d\n", (void *) currentnode, currentnode->n);
			exit(98);
		}
	}

	return (count);
}
