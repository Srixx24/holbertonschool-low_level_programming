#include <stdio.h>
#include "main.h"
/**
 * void _puts_recursion(char *s) - function that prints a string, followed by a new line.
 *
 * @s: string
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar ('\n');
	}
	else 
	{
		putchar(*s);
		puts_recursion(s + 1);
	}
}
