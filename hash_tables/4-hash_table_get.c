#include <stdlib.h>
#include <stdio.h>
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

	idx = hvalue ((unsigned char *)key, ht->size);
	n = ht->array[idx]
	
	while (n)
	{

	}

	return ();
}
