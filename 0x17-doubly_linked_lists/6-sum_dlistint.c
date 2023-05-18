#include "lists.h"

/**
 * sum_dlistint - calculate sum of all ints in a linked list
 * @head: head of the linked list
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int data_sum = 0;

	while (head)
	{
		data_sum += head->n;
		head = head->next;
	}
	return (data_sum);
}
