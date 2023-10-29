#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of
 * all its parameters
 *
 * @n: number of parameters
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int x;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
