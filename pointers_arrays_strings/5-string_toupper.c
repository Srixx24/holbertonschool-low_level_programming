#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 *
 * @str: string
 *
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}

	return (str);
}
