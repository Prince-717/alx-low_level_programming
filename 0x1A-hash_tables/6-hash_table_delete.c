#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *t1;
	hash_node_t *t2;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		t1 = ht->array[index];
		while ((t2 = t1) != NULL)
		{
			t1 = t1->next;
			free(t2->key);
			free(t2->value);
			free(t2);
		}
	}
	free(ht->array);
	free(ht);
}
