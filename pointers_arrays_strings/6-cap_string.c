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
		if (*ptr == ' ' || *ptr == '\n' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			cap = 1;
		}
		else if (cap)
		{
			*ptr = toupper(*ptr);
			cap = 0;
		}
		else
		{
			*ptr = tolower(*ptr);
		}

		ptr++;
	}

	return (str);
}
