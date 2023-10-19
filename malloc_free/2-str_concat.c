#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: null or strings
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = malloc((sizeof(char) * x) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	
	strcpy(s, s1);
	strcpy(s, s2);

	return (s);
}
