#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 *
 * @ht: hash table
 * @key: key
 *
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned int idx;

	if (ht == NULL || key == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	n = ht->array[idx];

	while (n != NULL)
	{
		if (strcmp(key, n->key) == 0)
			return (n->value);

		n = n->next;
	}

	return (NULL);
}
