#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function that prints the
 * sum of the two diagonals of a square matrix of
 * integers
 *
 * @a: array
 * @size: size
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum2 += a[x * size + (size - 1 - x)];
	}

	printf("%d, %d\n", sum1, sum2);
}
