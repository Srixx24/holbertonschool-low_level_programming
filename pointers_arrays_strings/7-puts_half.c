#include <stdio.h>
#include "main.h"
/**
 * puts_half - function that prints half of
 * a string, followed by a new line.
 *
 * @str: string to be printed
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int length = 0;
	int x, n;

	for(x = 0; str[x]; x++)
		length++;

	n = (length - 1) / 2;

	for (x = length / 2; x < length; x++)
		putchar(str[x]);

	putchar('\n');
}
