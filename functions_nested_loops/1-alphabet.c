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

int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		{

			putchar (ch);

		}
	putchar ('\n');

	return (0);
}
