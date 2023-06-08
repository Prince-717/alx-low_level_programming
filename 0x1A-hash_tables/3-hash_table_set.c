#include "hash_tables.h"

/**
 * add_n_hash - adds a node at the beginning of a hash at a given index
 *
 * @hash_head: hash_head of the hash linked list
 * @key: key of the hash
 * @value: value to store
 * Return: hash_head of the hash
 */
hash_node_t *add_n_hash(hash_node_t **hash_head, const char *key, const char *value)
{
	hash_node_t *temp_hash_table;

	temp_hash_table = *hash_head;

	while (temp_hash_table != NULL)
	{
		if (strcmp(key, temp_hash_table->key) == 0)
		{
			free(temp_hash_table->value);
			temp_hash_table->value = strdup(value);
			return (*hash_head);
		}
		temp_hash_table = temp_hash_table->next;
	}

	temp_hash_table = malloc(sizeof(hash_node_t));

	if (temp_hash_table == NULL)
		return (NULL);

	temp_hash_table->key = strdup(key);
	temp_hash_table->value = strdup(value);
	temp_hash_table->next = *hash_head;
	*hash_head = temp_hash_table;

	return (*hash_head);
}

/**
 * hash_table_set - adds a hash (key, value) to a given hash table
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int n_index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	n_index = key_index((unsigned char *)key, ht->size);

	if (add_n_hash(&(ht->array[n_index]), key, value) == NULL)
		return (0);

	return (1);
}
