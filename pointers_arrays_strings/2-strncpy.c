#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - function that copies a string.
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes
 *
 * Return: string copy
 */
char *_strncpy(char *dest, char *src, int n)
{

	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	while  (n > 0)
	{
		*dest++ = '\0';
		n++;
	}
	return (dest);
}
