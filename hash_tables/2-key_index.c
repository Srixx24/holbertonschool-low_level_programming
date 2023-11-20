#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *
 * @key: key
 * @size: size
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hvalue = hash_djb2(key);
	unsigned long int index = hvalue % size;

	return (index)
}
