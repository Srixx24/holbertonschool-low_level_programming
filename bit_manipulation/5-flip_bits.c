#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 *
 * @n: number
 * @m: flip number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int b = 0;

	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}

	return (b);
}
