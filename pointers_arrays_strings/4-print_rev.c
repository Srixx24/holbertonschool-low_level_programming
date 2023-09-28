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
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	for (x -= 1; x <= 0; x--)
	{
		putchar(s[x]);
	}
}
