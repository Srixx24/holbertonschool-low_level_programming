#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - function that checks
 * for uppercase character
 *
 * @c: returns 1 if c is uppercase
 *
 * Return: 1 if c is uppercase
 * otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 126)
	{
		return (1);
	}

return (0);
}
