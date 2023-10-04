#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *_strncat - function that concatenates two strings
 * return vaule of dest string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 *
 * _strncat return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i <= n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
