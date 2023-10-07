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
		if (x == 'a' || x == 'A' || x == 'e' || x == 'E' || x== 'o' || x == 'O'
		|| x == 't' || x == 'T' || x == 'l' || x == 'L')
		{
			*ptr = (x == 'a' || x == 'A') ? '4' :
			(x == 'e' || x == 'E') ? '3' :
			(x == 'o' || x == 'O') ? '0' :
			(x == 't' || x == 'T') ? '7' :
			(x == 'l' || x == 'L') ? '1' : x;
	
		}
		ptr++;
	}

	return (str);
}
