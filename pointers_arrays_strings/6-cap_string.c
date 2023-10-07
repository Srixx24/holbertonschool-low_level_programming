#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - function that capitalizes 
 * all words of a string.
 *
 * @str: string
 *
 * Return: 0
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (isspace(*ptr))
		{
		}
		else
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}

	return (str);
}
