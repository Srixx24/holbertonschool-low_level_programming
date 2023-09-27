#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - function that draws a
 * diagonal line on the terminal. Where n
 * is the number of times the character \
 * should be printed. The diagonal should
 * end with a \n, if n is 0 or less, the
 * function should only print a \n.
 *
 * @n:
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int x;
	
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar(92);
		}
		putchar('\n');
	}
}
