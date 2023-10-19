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
	int x;
	
	if (size == 0)
	{
		return ('\0');
	}
	a = malloc(size * sizeof(char));

	if (a == '\0')
	{
		return ('\0');
	}
	for (x = 0; x < size; x++)
	{
		a[x] = c;
	} 
	return (a);
}
