#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: hash table
 *
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node, *cur;

	if (ht != NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node)
		{
			cur = node;
			node = node->next;
			free(cur->key);
			free(cur->value);
			free(cur);
		}
	}

	free(ht->array);
	free(ht);
}
