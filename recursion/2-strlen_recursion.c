#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: String
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else 
	{
		_strlen_recursion(s +1);
	}
	return
}
