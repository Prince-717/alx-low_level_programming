#include "hash_tables.h"

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
 * @h: head of the shash linked list
 * @key: key of the shash
 * @value: value to store
 * Return: created node
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *temp;

	temp = *h;

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (temp);
		}
		temp = temp->next;
	}

	temp = malloc(sizeof(shash_node_t));

	if (temp == NULL)
		return (NULL);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *h;

	*h = temp;

	return (temp);
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
	int ter;

	temp1 = temp2 = ht->shead;

	while (temp1 != NULL)
	{
		ter = strcmp(fresh->key, temp1->key);
		if (ter == 0)
		{
			return;
		}
		else if (ter < 0)
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
	unsigned long int key_index;
	shash_node_t *fresh;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	key_index = key_index((unsigned char *)key, ht->size);

	fresh = add_n_shash(&(ht->array[key_index]), key, value);

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
	unsigned long int key_index;
	shash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	key_index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[key_index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
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
	shash_node_t *temp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	temp = ht->shead;

	while (temp != NULL)
	{
		printf("%s'%s': '%s'", sep, temp->key, temp->value);
		sep = ", ";
		temp = temp->snext;
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
	shash_node_t *temp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	temp = ht->stail;

	while (temp != NULL)
	{
		printf("%s'%s': '%s'", sep, temp->key, temp->value);
		sep = ", ";
		temp = temp->sprev;
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
