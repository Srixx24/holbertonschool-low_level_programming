#include <stdio.h>
#include "main.h"
/**
 * print_triangle - function that prints a
 * triangle with #, followed by a new line
 *
 * @size: size of triangle
 * 
 * Return: 0
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - x; y > 1; y--)
			{
				putchar(32);
			}
			for (z = 0; z < size; z++)
			{
				putchar(35);
			}
		putchar(35);
		putchar('\n');
		}
	}
}
