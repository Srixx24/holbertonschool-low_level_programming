#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout
 *
 * @str: string to print
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);
	putchar('\n');
}
