#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line
 *
 * Return: 0
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");
}
