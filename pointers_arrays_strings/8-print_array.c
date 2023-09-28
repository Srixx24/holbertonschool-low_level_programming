#include <stdio.h>
#include "main.h"
/**
 * print_array - function that prints n elements
 * of an array of integers, followed by a new line.
 *
 * @a: first value
 * @n: first value
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int a = 0;
	int n;
	
	for (a < n; a++)
	{
		printf("%d", a);
	}
	printf("\n");
}
