#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - function that prints
 * the numbers, from 0 to 9, followed by a
 * new line and does not print 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 2 || x == 4)
			continue;
		printf("%d", x);
	}
	putchar('\n');
}
