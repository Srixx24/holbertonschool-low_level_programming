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
		printf("Searching in array: ");
		for (x = low; x <= hi; x++)
		{
			if (x == low)
				printf("%d\n", array[x]);
			else
				printf("%d, ", array[x]);
		}
		mid = (low + hi) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			hi = mid - 1;
	}

	printf("\n");
	return (-1);
}
