#include "main.h"
#include <ctype.h>
/**
 * _isupper - function that checks
 * for uppercase character
 *
 * Return: 1 if c is uppercase
 * otherwise 0
 */
int _isupper(int c)
{
	char ch = 'c';

	if (isupper(c))
	{
		putchar(c);
		return (1);
	}

return (0);
}
