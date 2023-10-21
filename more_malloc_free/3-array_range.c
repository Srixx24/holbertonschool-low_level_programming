#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min: min value
 * @max: max value
 *
 * Return: NULL or range
 */
int *array_range(int min, int max)
{
	int *ar;
	int x;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = (min - max) + 1;

	ar = malloc(size * sizeof(int));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		ar[x] = min + 1;
	}
	return (ar);
}
