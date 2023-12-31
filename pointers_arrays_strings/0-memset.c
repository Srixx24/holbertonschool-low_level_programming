#include <stdio.h>
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: pointer
 * @b: bytes
 * @n: number
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}

	return (s);
}
