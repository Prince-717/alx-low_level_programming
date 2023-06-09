#include "hash_tables.n"

/**
 * shash_table_create - creates a shash table with a given size
 *
 * @size: size of the shash table
 * Return: the created shash table, or NULL if function fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int index;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = NULL;

	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * add_n_shash - adds a node at the beginning of a shash at a given index
 *
 * @n: head of the shash linked list
 * @key: key of the shash
 * @value: value to store
 * Return: created node
 */
shash_node_t *add_n_shash(shash_node_t **n, const char *key, const char *value)
{
	shash_node_t *temporary;

	temporary = *n;

	while (temporary != NULL)
	{
		if (strcmp(key, temporary->key) == 0)
		{
			free(temporary->value);
			temporary->value = strdup(value);
			return (temporary);
		}
		temporary = temporary->next;
	}

	temporary = malloc(sizeof(shash_node_t));

	if (temporary == NULL)
		return (NULL);

	temporary->key = strdup(key);
	temporary->value = strdup(value);
	temporary->next = *n;

	*n = temporary;

	return (temporary);
}

/**
 * add_i_shash - adds a node on the DLL of the shash table
 *
 * @ht: pointer to the table
 * @fresh: fresh node to add
 * Return: no return
 */
void add_i_shash(shash_table_t *ht, shash_node_t *fresh)
{
	shash_node_t *temp1, *temp2;
	int r;

	temp1 = temp2 = ht->shead;

	while (temp1 != NULL)
	{
		r = strcmp(fresh->key, temp1->key);
		if (r == 0)
		{
			return;
		}
		else if (r < 0)
		{
			fresh->sprev = temp1->sprev;

			if (temp1->sprev)
				temp1->sprev->snext = fresh;
			else
				ht->shead = fresh;

			temp1->sprev = fresh;
			fresh->snext = temp1;

			return;
		}
		temp2 = temp1;
		temp1 = temp1->snext;
	}

	fresh->sprev = temp2;
	fresh->snext = NULL;

	if (ht->shead)
		temp2->snext = fresh;
	else
		ht->shead = fresh;

	ht->stail = fresh;
}

/**
 * shash_table_set - adds a hash (key, value) to a given shash table
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int n_index;
	shash_node_t *fresh;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	n_index = key_index((unsigned char *)key, ht->size);

	fresh = add_n_shash(&(ht->array[n_index]), key, value);

	if (fresh == NULL)
		return (0);

	add_i_shash(ht, fresh);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * Return: value of the shash.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int n_index;
	shash_node_t *temporary;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	n_index = key_index((unsigned char *)key, ht->size);

	temporary = ht->array[n_index];

	while (temporary != NULL)
	{
		if (strcmp(temporary->key, key) == 0)
			return (temporary->value);
		temporary = temporary->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the keys and values of the shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temporary;
	char *deliminator;

	if (ht == NULL)
		return;

	printf("{");
	deliminator = "";

	temporary = ht->shead;

	while (temporary != NULL)
	{
		printf("%s'%s': '%s'", deliminator, temporary->key, temporary->value);
		deliminator = ", ";
		temporary = temporary->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints the keys and values of the shash table
 * in reverse
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temporary;
	char *deliminator;

	if (ht == NULL)
		return;

	printf("{");
	deliminator = "";

	temporary = ht->stail;

	while (temporary != NULL)
	{
		printf("%s'%s': '%s'", deliminator, temporary->key, temporary->value);
		deliminator = ", ";
		temporary = temporary->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *temp1;
	shash_node_t *temp2;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp1 = ht->array[index];
		while ((temp2 = temp1) != NULL)
		{
			temp1 = temp1->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
	}
	free(ht->array);
	free(ht);
}
