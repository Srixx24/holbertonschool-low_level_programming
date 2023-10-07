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
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (str[x] == s1[y])
			{
				str[x] = s2[y];
			}
		}
	}

	return (str);
}
