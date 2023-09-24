#include <stdio.h>
#include "main.h"
/**
 * print_sign - function that prints the sign
 * of a number
 *
 * n - if greater than 0 prints + and returns 1,
 * if is 0 prints 0 and returns 0, if less than 
 * 0 prints - and returns -1
 * 
 * Return: 1, 0, or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
