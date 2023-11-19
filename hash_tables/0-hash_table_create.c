#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: size
 *
 * Return: hash tablet or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	array = malloc(size * sizeof(hash_node_t *));

	if (array == NULL)
		return (NULL);

	ht->size = size;
	ht->array = array;

	return (ht);
}
