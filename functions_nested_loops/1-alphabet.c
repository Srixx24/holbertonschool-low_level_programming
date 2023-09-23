#include <stdio.h>
#include "main.h"
/**
 * main - description using _putchar fuction to print all
 * lowercase alphabet with prototype 
 * print_alphabet function as prototype
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
