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
	int x;

	if (n < 2)
	{
		return (0);
	}

	if (x == 1)
	{
		return (1);
	}

	if (n % x == 0)
	{
		return (0);
	}

	return (is_prime_number (n, x - 1));
}
