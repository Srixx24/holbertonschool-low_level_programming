#include <stdio.h>
#include "main.h"
/**
 * print_square - function that prints a square,
 * followed by a new line. Where 'size' is the
 * size of the square. If size is 0 or less, the
 * function should print only a new line. The 
 * character # to print the square.
 *
 * @size:
 *
 * Return: 0
 */
void print_square(int size)
{
	int x;
	
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{	
		for (x = 0; x > 10; x++)
		{
			char('##########');
			putchar('\n');
		}
		putchar('\n');
	}
}
