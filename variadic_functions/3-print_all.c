#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 *
 * @format: format specifier
 *
 * return: anything
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	int index = 0;
	va_list args;

	va_start(args, format);
	
	while (format[index] != '\0')
	{
		c = format[index];

		if (c == 'c')
		{
			i = va_arg(args, int);
			printf("%c", i);
		}
		else if (c == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (c == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (c == 's')
		{
			s = va_arg(args, char *);
			printf("%s", s);
		}
	}

	va_end(args);
	
	printf("\n");
}
