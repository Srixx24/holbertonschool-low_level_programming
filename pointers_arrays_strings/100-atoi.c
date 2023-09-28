#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _atoi - function that convert a string to
 * an integer within given parameters.
 *
 * @s: string to be converted
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (isspace(*s))
	{
		s++;
	}
	
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+') 
	{
		s++
	}

	while (isdigits(*s))
	{
		num = (num * 10) + (*s - '0');
			s++;
	}
		else
		{
			break;
		}
	}

	return (num * sign);
}
