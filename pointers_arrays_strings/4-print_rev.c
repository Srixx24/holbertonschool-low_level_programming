#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line
 *
 * @s:
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int length = stlen(str);
	int x, y;

	for (x = 0, y =length -1; x <y; x++, y--)
	{
		char temp = str[x];
		str[x] = str[y];
		str[y] = temp;
	}
}
