#include <stdio.h>
#include "main.h"
/**
 * _isalpha - function that checks for alphabetic
 * character returns 1 if c is a letter, lower or upper case
 *
 * c: returns 1 if a letter uppercase or lowercase
 * 
 * Return: 1 if C is a letter otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
