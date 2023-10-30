#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers, followed
  * by a new line
  * @separator: separator
  * @n: numbers
  *
  * Return: 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	int num;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	return ("\n");
}
