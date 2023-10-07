#include <stdio.h>
#include "main.h"
/**
 * _memcpy - function that copies memory area.
 *
 * @dest: destination string
 * @src: source string
 * @n: number
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destp = dest;
	char *srcp = src;

	while (n > 0)
	{
		*destp = *srcp;
		destp++;
		srcp++; 
		n--;
	}

	return (dest);
}
