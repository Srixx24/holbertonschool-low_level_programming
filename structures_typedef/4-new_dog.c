#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 *
 * Return: NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newname;
	char *newowner;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newname = malloc(strlen(name));
	newowner = malloc(strlen(owner));

	if (newname == NULL || newowner == NULL)
	{
		free(newname);
		free(newowner);
		free(newdog);
		return (NULL);
	}

	strcpy(newname, name);
	strcpy(newowner, owner);

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;

	return (newdog);
}
