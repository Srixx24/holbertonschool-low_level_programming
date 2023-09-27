#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Write a function that
 * checks for a digit (0 through 9)
 *
 * @c: returns 1 if a digit
 *
 * Return: 1 if c is a digit otherwise
 * 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
