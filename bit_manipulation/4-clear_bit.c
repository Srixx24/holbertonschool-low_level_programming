#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - function that sets the value of a
 * bit to 0 at a given index.
 *
 * @n:number
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
		return (-1);

	if (*n & (1UL << index))
		*n ^= (1UL << index);

	return (1);
}
