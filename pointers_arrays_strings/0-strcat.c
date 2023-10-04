#include <stdio.h>
#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: Pointer to result string
 */
char *_strcat(char *dest, char *src)
{
	char *prt = dest;

	while (*prt != '\0')
	{
		prt++;
	}

	while (*src != '\0')
	{
		*prt++ = *src++;
	}

	*prt = '\0';

	return (dest);
}
