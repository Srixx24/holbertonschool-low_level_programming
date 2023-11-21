#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: hash table
 *
 * Return: ht or NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int x;
	hash_node_t *node;

	while (x <ht->size)
	{
		if (ht->array[x] != NULL)
		{
			node = ht->array[x];
			node = node->next;
		}
	
		x++;
	}
}
