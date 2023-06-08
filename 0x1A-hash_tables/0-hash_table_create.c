#include "hash_tables.h"

/**
 * hash_table_create - creates a hash hashtable with a given size
 *
 * @size: size of the hash hashtable
 * Return: the created hash hashtable, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	hash_node_t **hasharray;
	unsigned long int index;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hasharray = malloc(sizeof(hash_node_t *) * size);
	if (hasharray == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		hasharray[index] = NULL;

	hashtable->hasharray = hasharray;
	hashtable->size = size;

	return (hashtable);
}
