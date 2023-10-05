#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcmp - function that compares two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0); 
	}
	else if (*s1 == '\0')
	{
		return (1);
	}
	else if (*s2 == '\0')
	{
		return (-1);
	}
}
