#include <stdio.h>
#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 *
 * Return: Pointer to result string
 */
char *_strcat(char *dest, char *src)
{
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return (*dest);
}
