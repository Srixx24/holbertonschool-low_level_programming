#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns the natural
 * square root of a number.
 *
 * @n: number to calculate
 * @i: number to iterate
 *
 * Return: -1
 */
int _sqrt_recursion(int n, int i)
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
