#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of
 * chars, and initializes it with a specific char
 *
 * @size: size of array
 * @c: char
 *
 * Return: pointer or 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		a[x] = c;
	}
	return (a);
}
