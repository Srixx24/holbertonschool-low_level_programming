#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - function that prints the binary
 * representation of a number.
 *
 * @n: Number
 *
 * Return: n
 */
void print_binary(unsigned long int n)
{
	unsigned int bit = 1u << (sizeof(n) * 8 - 1);

	while (bit > 0)
	{
		if (n & bit)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

		bit >>= 1;
	}
}
