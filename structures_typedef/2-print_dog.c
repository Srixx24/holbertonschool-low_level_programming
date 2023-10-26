#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 *
 * @d: dog structure
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %c\n", (d->name) ? d->name : "(nil)";
		printf("age: %f\n", (d->age) ? d->age : "(nil)";
		printf("owner: %c\n", (d->owner) ? d->owner : "(nil)";
	}

	return (0);
}
