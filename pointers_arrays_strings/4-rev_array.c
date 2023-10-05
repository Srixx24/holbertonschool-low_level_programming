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
 * Return: 
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;

	while (start < end)
	{
		temp = int *a[start];
		int *a[start] = int *a[end];
		int *a[end] = temp;
	}
}
