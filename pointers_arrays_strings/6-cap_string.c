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
	int cap = 1;

	while (*ptr)
	{
		if (isspace(*ptr))
		{
			cap = 1;
		}
		else
		{
			*ptr = toupper(*ptr);
			cap = 0;
		}
		ptr++;
	}

	return (str);
}
