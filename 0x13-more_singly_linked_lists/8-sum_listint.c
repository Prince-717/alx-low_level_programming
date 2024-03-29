#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Return the sum of all the data (n) of a listint_t linked list.
 *
 * @head: Pointer to the first node of a linked list.
 * Return: Sum of all list data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
