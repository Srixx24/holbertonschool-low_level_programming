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
	unsigned long int bit = 1ul << (sizeof(n) * 8 - 1);
	int extra = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	while (bit > 0)
	{
		if (n & bit)
		{
			printf("1");
			extra = 1;
		}
		else if (extra)
		{
			printf("0");
		}

		bit >>= 1;
	}
}
