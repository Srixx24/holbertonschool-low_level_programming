#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 *
 * @width: lenght of array
 * @height: amount of arrays
 *
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int x, y;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * height);
	
	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		a[x] =malloc(sizeof(int *) * width);

		if (a[x] == NULL)
		{
			for (y = 0; y < width; y++)
			{
			
				free(a[x]);
			}
			return (NULL);
		}
		free(a);	
	}

	return (a);
}
