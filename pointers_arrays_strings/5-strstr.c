#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring.
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *x = haystack;
	char *y = needle;

	while (x != '\0')
	{
		while (x == y && y != '\0')
		{
			x++;
			y++;
		}
		if (y == '\0')
		{
			return (haystack);
		}
		x++;
	}

	return (needle);
}
