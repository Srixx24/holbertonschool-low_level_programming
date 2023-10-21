#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes
 *
 * Return: n
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	size_t l1 = strlen(s1);
	size_t l2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s = malloc((sizeof(char) * (l1 + l2 + 1)));

	if (s == NULL)
	{
		return (NULL);
	}

	strcpy(s, s1);
	strcat(s + l1, s2);

	return (s);
}	
