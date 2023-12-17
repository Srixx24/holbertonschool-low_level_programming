#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: array
 * @size: size
 * @value: value
 * Return: -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%zu] = [%d]\n", array, array[x]);

		if (array[x] == value)
			return (x);
	}

	return (-1);
}
