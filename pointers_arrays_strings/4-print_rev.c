#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line
 *
 * @s: string length
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int x, y;

	for (x = 0, y =length -1; x <y; x++, y--)
	{
		char temp = s[x];
		s[x] = s[y];
		s[y] = temp;
	}
}
