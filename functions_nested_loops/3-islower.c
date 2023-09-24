#include <stdio.h>
#include "main.h"
/**
 * _islower - Writing a function that checks
 * for lowercase characters that returns 1
 * if c is lowercase otherwise 0
 * 
 * C - if lower return 1 otherwise 0
 *
 * Return: 0 or 1
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
