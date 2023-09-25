#include <stdio.h>
#include "main.h"
/**
 * times_table - function that prints the
 * 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int x, y, z;
	int c = 9;

	for (x = 0; x <= c; x++)
	{
		for (y = 0; y <= c; y++)
		{
			z = x * y;
			if (z / 10)
			{
				_putchar(z / 10 + 0);
			}
			else if (y > 0)
			{
				_putchar(' ');
			
				_putchar(z % 10 + 0);
			}
			if (y < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	_putchar('\n');

}

