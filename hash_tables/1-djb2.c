#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 *
 * @str: string
 *
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int x;

	while (x = *str)
	{
		hash = ((hash << 5) + hash) + x;
	}

	return (hash);
}
