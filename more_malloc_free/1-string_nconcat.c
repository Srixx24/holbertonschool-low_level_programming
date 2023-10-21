#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

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
	size_t l1, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
	{
		n = l2;
	}

	s = malloc((l1 + n + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	strcpy(s, s1);
	strncat(s, s2, n);
	s[l1 + n] = '\0';

	return (s);
}
