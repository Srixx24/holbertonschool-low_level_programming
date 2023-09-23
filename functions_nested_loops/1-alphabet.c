#include <stdio.h>
#include "main.h"
/**
 * main - printing alphabet with putchar function
 *
 * Discription - using putchar fuction to print all
 * lowercase alphabet with prototype
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		{

			putchar (ch);

		}
	_putchar ('\n');

	return (0);
}
