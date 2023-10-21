#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates
 * memory using malloc
 *
 * @b: size
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	
	ptr = malloc(b * sizeof (int));

	return (ptr);
}
