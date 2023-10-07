#include <stdio.h>
#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * With only use one if loop and only two loops
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @str: string
 *
 * Return: str
 */
char *leet(char *str)
{
	char *ptr = str;
	char x = *ptr;

	while (*ptr)
	{
		if (x == 'a' || x == 'A')
		{
			*ptr = '4';
		}
		else if (x == 'e' || x == 'E')
		{
			*ptr = '3';
		}
		else if (x == 'o' || x == 'O')
		{
			*ptr = '0';
		}
		else if (x == 't' || x == 'T')
		{
			*ptr = '7';
		}
		else if (x == 'l' || x == 'L')
		{
			*ptr = '1';
		}

		ptr++;
	}

	return (str);
}
