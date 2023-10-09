#include <stdio.h>
#include "main.h"
/**
 * void print_diagsums - function that prints the
 * sum of the two diagonals of a square matrix of
 * integers
 *
 * @a: 
 * @size: 
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
		sum1 += a[size + 1];
		sum2 += a[size + (size - 1 -x)];
	}
}
