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
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			printf("%c", ch);
	}

	printf('\n');

}
