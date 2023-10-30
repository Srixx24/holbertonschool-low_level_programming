#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings,
 * followed by a new line
 *
 * @separator: separator
 * @n: number
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{ 
	va_list args;
	va_start(args, n);
	const char *str;
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		str = va_args(const char);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			print("%s", separator);
		}

	}

	va_end(args);

	printf("\n");
}
