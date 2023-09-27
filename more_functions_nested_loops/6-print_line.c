#include <stdio.h>
#include "main.h"
/**
 * print_line - function that draws a
 * straight line in the terminal. Where
 * n is the number of times the character
 * _ should be printed. The line should
 * end with a \n, if n is 0 or less, the
 * function should only print \n
 *
 * @n: lines to draw 
 *
 * Return: 0
 */
void print_line(int n)
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
			putchar('95');
		}
		putchar('\n');
	}
}
