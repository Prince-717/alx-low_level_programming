#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * Return: value of the hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int n_index;
	hash_node_t *temp_hash_table;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	n_index = key_index((unsigned char *)key, ht->size);

	temp_hash_table = ht->array[n_index];

	while (temp_hash_table != NULL)
	{
		if (strcmp(temp_hash_table->key, key) == 0)
			return (temp_hash_table->value);
		temp_hash_table = temp_hash_table->next;
	}

	return (NULL);
}
