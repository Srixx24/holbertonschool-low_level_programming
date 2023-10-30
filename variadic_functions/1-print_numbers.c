#include <stdlib.h>
#include <stdio.h>
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
	int x;

	va_start(args, n);

	for (x = 0; x <n; x++)
	{
		num = va_arg(arg,int);

		if (separator != NULL && x < n)
		{
			printf("%s\n");
		}
	}

	va_end(arg);
}
