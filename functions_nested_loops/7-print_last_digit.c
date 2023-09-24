#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that prints
 * the last digit of a number.
 *
 * Return: 0
 */
int print_last_digit(int x)
{
	int last;
	
	last = x % 10;
	if (last <0)
	{
		last = last * -1;
	}
	putchar(last + 0);

	return (last);
}
