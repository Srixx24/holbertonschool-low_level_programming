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
			{
				printf("%2d, ");
			}
			else if (z != 9)
			{
			printf("%d");
			}
		}
	}
	printf("\n");

}

