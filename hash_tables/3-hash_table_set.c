#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: table
 * @key: key
 * @value: value
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	node = ht->array[idx];
	new = malloc(sizeof(hash_node_t *));

	if (new == NULL)
		return (0);

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			node->value = strdup(value);
			return (1);
		}
	}

	new->value = strdup(value);
	new->key = strdup(key);
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
