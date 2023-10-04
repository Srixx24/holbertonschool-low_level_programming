#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *_strncat - function that concatenates two strings.
 *
 * @*dest: destination string
 * @*src: source string
 * @n: number of characters
 *
 * return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i <= *src; i++)
	{
		src++;
		n++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
