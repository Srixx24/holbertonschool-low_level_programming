#include <stdio.h>
#include "main.h"
/**
 * _sqrt - returns the natural
 * square root of a number.
 *
 * @n: number to calculate
 * @i: number to iterate
 *
 * Return: -1
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
