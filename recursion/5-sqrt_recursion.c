#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns the natural
 * square root of a number.
 *
 * @n: Sqrt
 *
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 0)
	{
		return (n);
	}
	else
	{
		x = _sqrt_recursion(n / 2);
		
		if (x > n)
		{
			return (x - 1);
		}
		else
		{
			return (x);
		}
	}
}
