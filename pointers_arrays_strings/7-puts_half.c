#include <stdio.h>
#include "main.h"
/**
 * puts_half - function that prints half of
 * a string, followed by a new line.
 *
 * @str: 
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int length = 0;
	int x;

	for(x = 0; str[x]; x++)
		length++;

	for (x = 0; i < length / 2; x++)
		putchar(str[x]);

	putchar('\n');
}
