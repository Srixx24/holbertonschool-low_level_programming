#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: array
 * @size: size
 * @value: value
 * Return: - 1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int x, mid;
	int low = 0;
	int hi = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= hi)
	{
		mid = (low + hi) / 2;

		printf("Searching in array: %d", array[low]);
		for (x = low + 1; x <= hi; x++)
		{
			printf(", %d", array[x]);
		}
		printf("\n");

		if (array[mid] < value)
			return (mid);
		else if (array[mid] > value)
			low = mid + 1;
		else
			hi = mid - 1;
	}

	return (-1);
}
