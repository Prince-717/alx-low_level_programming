#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	char *d = "";
	unsigned long int index;
	hash_node_t *t = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		for (t = ht->array[index]; t != NULL; t = t->next)
		{
			printf("%s'%s': '%s'", d, t->key, t->value);
			d = ", ";
		}
	}
	puts("}");
}
