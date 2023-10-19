#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter
 *
 * @str: string pointer
 *
 * Return: null
 */
char *_strdup(char *str)
{
	char *ds;
	
	if (str == NULL)
	{
		return (NULL);
	}
	
	ds = malloc((strlen(str) + 1) * sizeof(char));

	if (ds == NULL)
	{
		return (NULL);
	}

	strcpy(ds, str);

	return (ds);
}
