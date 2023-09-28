#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest. 
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		scr++;
	}
	*dest = '\0';
}
