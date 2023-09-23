#include <stdio.h>
#include "main.h"
/**
 * main - printing alphabet with putchar function
 *
 * Discription - using _putchar fuction to print all
 * lowercase alphabet with prototype print_alphabet
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{

		_putchar (ch);

	}
	_putchar ('\n');

}
