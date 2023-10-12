#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns the natural
 * square root of a number.
 *
 * @n:
 *
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion (n + 1));
	}
}
