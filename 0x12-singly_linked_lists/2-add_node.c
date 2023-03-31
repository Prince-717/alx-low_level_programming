#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be stored in the new node
 *
 * Return: address of the new element or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head || !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 *
 * Return: length of the string
 */

size_t _strlen(char *s)
{
	size_t len = 0;

	while (s[len])
		len++;
	return (len);
}
