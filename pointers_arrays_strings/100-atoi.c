#include <stdio.h>
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
	
	if (*s == '-')
	{
		sign *= -1;
	}

	while (*s != '\0')
	{
		if (*s >= 0 && *s <= 9)
		{
			num = (num* 10) + (*s - 0);
		}
		 else (num > 0)
		 
			break;
	}

	while (*s++);

	return(num * sign);
}
