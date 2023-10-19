#include <stdio.h>
#include <stdlib.h>
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
	int x = 0;
	int y = 1;
	char *ds;
	
	if (str == NULL)
	{
		return (NULL);
	}
	
	ds = malloc((sizeof(char) * y) + 1);

	if (ds == NULL)
	{
		return (NULL);
	}

	ds = malloc((sizeof(char) * (strlen(str) + 1); strcpy(ds, str);

	return (ds);
}
