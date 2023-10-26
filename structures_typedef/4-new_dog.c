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
	
	newdog =malloc(sizeof(dog_t));
	
	if (newdog == NULL)
	{
		return(NULL);
	}

	newname = malloc(strlen(name));
	newowner = malloc(strlen(owner));
	
	if (newname == NUll || newowner == NULL)
	{
		free
		return (NULL)
	}

	strncpy(name, newname);
	strncpy(owner, newowner)

	newdog->name = newname;
	newdog->age = newage;
	newdog->owner = newowner;

	return(newdog);
}
