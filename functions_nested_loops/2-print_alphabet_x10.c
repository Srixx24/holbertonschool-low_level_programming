#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prototype print alphabet
 * to print all lowercase alphabet with prototype ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)

			_putchar(ch);
		_putchar('\n');

	}

}
