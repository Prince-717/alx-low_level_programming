#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	char *deliminator = "";
	unsigned long int index;
	hash_node_t *ptr_hash_table = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		for (ptr_hash_table = ht->array[index]; ptr_hash_table != NULL; ptr_hash_table = ptr_hash_table->next)
		{
			printf("%s'%s': '%s'", deliminator, ptr_hash_table->key, ptr_hash_table->value);
			deliminator = ", ";
		}
	}
	puts("}");
}
