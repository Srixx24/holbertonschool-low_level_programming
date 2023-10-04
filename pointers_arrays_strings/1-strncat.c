#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *_strncat - Concatenates two strings, using at
 * most n bytes from src.
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
