#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: Address of the node where the loop starts, or NULL if there is no
 * loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snow, *bolt;

	if (!head)
		return (NULL);

	snow = head;
	bolt = head;

	while (bolt && bolt->next)
	{
		snow = snow->next;
		bolt = bolt->next->next;

		if (snow == bolt)
		{
			snow = head;

			while (snow != bolt)
			{
				snow = snow->next;
				bolt = bolt->next;
			}

			return (bolt);
		}
	}

	return (NULL);
}
