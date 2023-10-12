#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
	{
		return (0);
	}

	for (;x * x <= x; x++);
	{
		return (0);
	}
}
