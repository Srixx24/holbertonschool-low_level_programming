#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index
 *
 * @n: number
 * @index: index
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (1)
}
