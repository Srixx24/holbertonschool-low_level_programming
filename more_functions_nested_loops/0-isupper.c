#include "main.h"
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

if (isupper(ch))
{
_putchar (ch);
return (1);
}
return (0);
}
