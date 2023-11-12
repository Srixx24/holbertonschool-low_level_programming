#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 *
 * @b: 
 *
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b != NULL)
		return (0);

	while (*b)
	{
		if (*b != 0 && *b != '1')
			return (0);

		x = (x << 1);
		b++;
	}

	return (x);
}
