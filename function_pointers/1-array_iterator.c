#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 *
 * @array:
 * @size:
 * @action:
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;

	if (array != NULL && action != NULL)
	{
		while (x <size)
		{
			action(array);
			x++;
		}
	}
}
