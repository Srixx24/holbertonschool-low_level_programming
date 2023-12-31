#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * reverse_array - function that reverses
 * the content of an array of integers.
 *
 * @a: array
 * @n: number of elements of the array
 *
 * Return: reverse array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
