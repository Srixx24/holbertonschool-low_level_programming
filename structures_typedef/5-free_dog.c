#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 *
 * @d: structure of dog
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(owner);
		free(name);
	}
}
